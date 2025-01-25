/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 09:43:16 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/25 09:57:16 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
#define EASY_FIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T& container, int value) {
    typename T::iterator it;
    it = std::find(container.begin(), container.end(), value); 
    if (it != container.end()) {
        return it;
    }
    else {
        throw std::runtime_error("no occurrence is found");
    }
}

#endif // EASY_FIND_HPP
