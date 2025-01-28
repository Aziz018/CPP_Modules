/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:02:14 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/28 14:44:51 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

class Span
{
private:
    unsigned int _progress;
    unsigned int _n;
    
public:
    Span(unsigned int n);
    void addNumber();
    int shortestSpan();
    int longestSpan();
    ~Span();
};

#endif // SPAN_HPP