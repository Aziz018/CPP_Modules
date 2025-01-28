/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heisenberg <heisenberg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:02:11 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/28 21:03:27 by heisenberg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

Span::Span(unsigned int n) : _progress(0), _maxSize(n)
{
}

void Span::addNumber(int number) {
    if (this->_progress < this->_maxSize) {
        this->_vec.push_back(number);
        this->_progress++;
    }
    else {
        throw std::overflow_error("buffer overflow");
    }
}

int Span::shortestSpan() {
    return 0;
}

int Span::longestSpan() {
    return 0;    
}

Span::~Span()
{
}

void Span::print() {
    for (size_t i = 0; i < this->_progress; i++) {
        std::cout << this->_vec.at(i) << " ";
    }
}
