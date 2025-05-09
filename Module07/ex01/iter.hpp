/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: p4nd4 <p4nd4@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:53:18 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/05/09 05:23:05 by p4nd4            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename F>
void iter(T *Array, size_t ArrayLen, F func) {
    for (size_t i = 0; i < ArrayLen; i++) {
        func(Array[i]);
    }
}

#endif // ITER_HPP
