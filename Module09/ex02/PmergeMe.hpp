#pragma once

#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
#include <deque>
// #include <map>

void fordJohnson(std::vector<int>& c);
void fordJohnson(std::deque<int>& c);
void checkNumber(const std::string& str);

template <typename Container>
void printContainer(const Container& container) {
    for (typename Container::const_iterator it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}


// void parseInput(int ac, char* av[], std::vector<int>& container);
template <typename Container>
void parseInput(int ac, char* av[], Container& container) {
    for (int i = 1; i < ac; ++i) {
        checkNumber(av[i]);
        long number;
        std::istringstream ss(av[i]);

        ss >> number;
        if (ss.fail() || !ss.eof()) {
            throw std::runtime_error("Error: invalid number format");
        }

        if (number > 2147483647) {
            throw std::runtime_error("Error: number too big");
        }
        container.push_back(number);
    }
}


// void printContainer(const std::vector<int>& container);
// template <typename T>
// void printContainer(const T& container) {
//     for (size_t i = 0; i < container.size(); ++i) {
//         std::cout << container.at(i) << " ";
//     }
//     std::cout << std::endl;
// }
