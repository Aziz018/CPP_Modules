/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:02:14 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/29 14:36:22 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <iostream>
#include <vector>

class Span
{
private:
    unsigned int _maxSize;
    std::vector<int> _array;
    
public:
    Span(unsigned int n);
    void addNumber(int number);
    int shortestSpan();
    int longestSpan();
    ~Span();

    void print();
};

#endif // SPAN_HPP