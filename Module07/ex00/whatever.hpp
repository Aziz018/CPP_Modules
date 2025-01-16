/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 18:15:17 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/16 14:44:28 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATERVER_HPP
#define WHATERVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T min(T a, T b) {
    return a < b ? a : b;
}

template <typename T>
T max(T a, T b) {
    return a < b ? b : a;
}

#endif // WHATERVER_HPP