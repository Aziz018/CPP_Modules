/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:30:00 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/02/05 20:22:42 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <BitcoinExchange.hpp>

#include <iostream>
#include <iomanip>
#include <fstream>
#include <map>

#include <cstdlib>
#include <cmath>

struct Date {
    int year;
    int month;
    int day;

    Date() : year(0), month(0), day(0) {}
    Date(int y, int m, int d) : year(y), month(m), day(d) {}

    bool operator< (const Date& other) const {
        if (year != other.year)
            return year < other.year;
        if (month != other.month)
            return month < other.month;
        return day < other.day;
    }

    bool operator== (const Date& other) const {
        return year == other.year
            && month == other.month
            && day == other.day;
    }
};

bool parseDate(const std::string& dateStr, Date& date) {
    if (dateStr.size() != 10 || dateStr.at(4) != '-' || dateStr.at(7) != '-')
        return false;

    char* end;
    long year = strtol(dateStr.substr(0, 4).c_str(), &end, 10);
    if (*end != '\0' || year < 2009 || year > 2025) // Bitcoin started in 2009
        return false;

    long month = strtol(dateStr.substr(5, 2).c_str(), &end, 10);
    if (*end != '\0' || month < 1 || month > 12)
        return false;

    long day = strtol(dateStr.substr(8, 2).c_str(), &end, 10);
    if (*end != '\0' || day < 1 || day > 31)
        return false;

    date.year = static_cast<int>(year);
    date.month = static_cast<int>(month);
    date.day = static_cast<int>(day);
    return true;
}

void loadBitcoinPrices(std::map<Date, float>& prices) {
    std::ifstream file("data.csv");
    if (!file.is_open()) {
        throw std::runtime_error("Error: can not open data.csv");
    }

    std::string line;
    while(std::getline(file, line)) {
        size_t commaPos = line.find(',');
        if (commaPos == std::string::npos)
            continue;

        std::string dateStr = line.substr(0, commaPos);
        std::string priceStr = line.substr(commaPos + 1);

        Date date;
        if (!parseDate(dateStr, date))
            continue;

        char *end;
        float price = strtof(priceStr.c_str(), &end);
        if (*end != '\0')
            continue;

        prices[date] = price;
    }

    file.close();
}

Date findClosestDate(const std::map<Date, float>& prices, const Date& target) {
    std::map<Date, float>::const_iterator it = prices.lower_bound(target);
    
    if (it == prices.begin()) return it->first;
    if (it == prices.end()) return (--it)->first;
    
    std::map<Date, float>::const_iterator prev = it;
    --prev;
    
    if (target < it->first) {
        return prev->first;
    }
    return it->first;
}

void processInputFile(const std::map<Date, float>& prices, const std::string& filename) {
    std::ifstream file(filename.c_str());
    if (!file.is_open()) {
        throw std::runtime_error("Error: can not open data.csv");
    }

    std::string line;
    while(std::getline(file, line)) {
        size_t pipePos = line.find('|');
        if (pipePos == std::string::npos)
        {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }

        std::string dateStr = line.substr(0, pipePos);
        // should trim whitespaces
        std::string valueStr = line.substr(pipePos + 1);
        // should trim whitespaces

        Date date;
        if (!parseDate(dateStr, date)) {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }

        char *end;
        float value = strtof(valueStr.c_str(), &end);
        if (*end != '\0' || value <= 0) {
            std::cerr << "Error: not a positive number." << std::endl;
            continue;
        }
        if (value > 1000) {
            std::cerr << "Error: too large a number." << std::endl;
            continue;
        }

        std::map<Date, float>::const_iterator it = prices.find(date);
        if (it == prices.end()) {
            Date closestDate = findClosestDate(prices, date);
            it = prices.find(closestDate);
            if (it == prices.end()) {
                std::cerr << "Error: no date available for date " << dateStr << std::endl;
                continue;
            }
        }

        float result = value * it->second;
        std::cout << dateStr << " => " << value << " = " << std::fixed << std::setprecision(2) << result << std::endl;
    }
}

int main(int ac, char* av[]) {
    if (ac != 2) {
        std::cerr << "Usage: " << av[0] << " <input_file>" << std::endl;
        return 1;
    }

    std::map<Date, float> prices;
    try {
        loadBitcoinPrices(prices);
        processInputFile(prices, av[1]);
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
