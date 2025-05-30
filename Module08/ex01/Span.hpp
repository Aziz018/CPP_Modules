/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:02:14 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/29 14:37:56 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

class Span
{
    private:
        unsigned int _size;
        std::vector<int> _array;
        
    public:
        Span();
        Span(const Span& other);
        Span& operator= (const Span& copy);
        ~Span();
        
        unsigned int size() const;
        const std::vector<int>& getSpan() const;
        Span(unsigned int n);
        void addNumber(int number);
        void add(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int shortestSpan();
        int longestSpan();

        void print();
};

#endif // SPAN_HPP