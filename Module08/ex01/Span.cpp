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

Span::Span(unsigned int n) : _maxSize(n)
{
}

void Span::addNumber(int number) {
    if (this->_array.size() >= this->_maxSize) {
        throw std::overflow_error("buffer overflow");
    }
    this->_array.push_back(number);
}

int Span::shortestSpan() {
    if (this->_maxSize < 2) {
        throw std::exception();
    }

    int minDistance = abs(this->_array[0] - this->_array[1]);
    int minSpan = minDistance;

    for (size_t i = 1; i < this->_maxSize - 1; i++) {
        minDistance = abs(this->_array[i] - this->_array[i + 1]);
        
        if (minSpan > minDistance) {
            minSpan = minDistance;
        }
    }

    return minSpan;
}

int Span::longestSpan() {
    if (this->_maxSize < 2) {
        throw std::exception();
    }

    int maxDistance = abs(this->_array[0] - this->_array[1]);
    int maxSpan = maxDistance;

    for (size_t i = 1; i < this->_maxSize - 1; i++) {
        maxDistance = abs(this->_array[i] - this->_array[i + 1]);
        
        if (maxSpan < maxDistance) {
            maxSpan = maxDistance;
        }
    }

    return maxSpan;
}

Span::~Span()
{
}

void Span::print() {
    for (size_t i = 0; i < this->_array.size(); i++) {
        std::cout << this->_array.at(i);
        if (i < this->_maxSize - 1) {
            std::cout << " ";
        }
    }
}
