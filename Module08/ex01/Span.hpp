/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heisenberg <heisenberg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:02:14 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/28 21:00:32 by heisenberg       ###   ########.fr       */
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
    unsigned int _progress;
    unsigned int _maxSize;
    std::vector<int> _vec;
    
public:
    Span(unsigned int n);
    void addNumber(int number);
    int shortestSpan();
    int longestSpan();
    ~Span();

    void print();
};

#endif // SPAN_HPP