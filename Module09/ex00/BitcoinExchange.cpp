/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:29:58 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/02/05 20:23:27 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <BitcoinExchange.hpp>

bool checkExtension(const std::string& fileExtension, const std::string& extension) {
    // std::cout << fileExtension << " | " << extension << std::endl;
    return fileExtension == extension;
}

BitcoinExchange::BitcoinExchange(const std::string& db)
{
    std::ifstream file(db.c_str(), std::ios::in);
    std::string line;
    std::vector<std::string> string_array;
    
    if (!checkExtension(db.substr(db.size() - 4), ".csv")) {
        throw std::runtime_error("extension does not match [.csv]");
    }
    
    if (file.is_open()) {
        while(std::getline(file, line)) {
            string_array.push_back(line);
            std::cout << line << std::endl;
            // std::cout << string_array.back() << std::endl;
        }
        file.close();
    }
    else {
        throw std::runtime_error("file does not open");
    }
}

BitcoinExchange::~BitcoinExchange()
{
}
