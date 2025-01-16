/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:53:18 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/16 17:36:16 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *Array, size_t ArrayLen, void (*func)(T &)) {
    for (size_t i = 0; i < ArrayLen; i++) {
        func(Array[i]);
    }
}

#endif // ITER_HPP
