/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:02:14 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/25 12:07:53 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

class Span
{
private:
    unsigned int _n;
    
public:
    Span(unsigned int n);
    void addNumber();
    void shortestSpan();
    void longestSpan();
    ~Span();
};

Span::Span(unsigned int n)
{
}

Span::~Span()
{
}


#endif // SPAN_HPP