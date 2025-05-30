/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:02:11 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/29 14:39:07 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

Span::Span() : _size(0) {}
Span::Span(unsigned int n) : _size(n) {}
Span::~Span() {}

Span::Span(const Span& other) : _size(other._size), _array(other._array) {
    // *this = other;
}

Span& Span::operator= (const Span& copy) {
    if (this != &copy) {
        this->_size = copy._size;
        this->_array = copy._array;
    }
    return *this;
}

unsigned int Span::size() const {
    return this->_size;
}

const std::vector<int>& Span::getSpan() const {
    return this->_array;
}

void Span::addNumber(int number) {
    if (this->_array.size() >= this->_size) {
        throw std::overflow_error("buffer overflow");
    }
    this->_array.push_back(number);
}

void Span::add(std::vector<int>::iterator begin, std::vector<int>::iterator end, int number) {
    for (std::vector<int>::iterator it = begin; it != end; ++it) {
        this->addNumber(number);
    }
}

int Span::shortestSpan() {
    if (this->_size < 2) {
        throw std::exception();
    }

    int minDistance = abs(this->_array[0] - this->_array[1]);
    int minSpan = minDistance;

    for (size_t i = 1; i < this->_size - 1; i++) {
        minDistance = abs(this->_array[i] - this->_array[i + 1]);
        
        if (minSpan > minDistance) {
            minSpan = minDistance;
        }
    }

    return minSpan;
}

int Span::longestSpan() {
    if (this->_size < 2) {
        throw std::exception();
    }

    // int maxDistance = abs(this->_array[0] - this->_array[1]);
    // int maxSpan = maxDistance;

    // for (size_t i = 1; i < this->_size - 1; i++) {
    //     maxDistance = abs(this->_array[i] - this->_array[i + 1]);
        
    //     if (maxSpan < maxDistance) {
    //         maxSpan = maxDistance;
    //     }
    // }

    int maxSpan = *std::max_element(this->_array.begin(), this->_array.end()) - *std::min_element(this->_array.begin(), this->_array.end());

    return maxSpan;
}

void Span::print() {
    for (size_t i = 0; i < this->_array.size(); i++) {
        std::cout << this->_array.at(i);
        if (i < this->_size - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}
