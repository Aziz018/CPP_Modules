/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:34:59 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/17 11:53:12 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <array>

// Topic: std::array

// Syntax: std::array<T, N> name;

// Notice:
// 1. std::array is a container that encapsulates fixed size arrays.
// 2. arraysize is needed at compile time to create an array.
// 3. Assign by value.
// 4. Access to elements:
//    a. at() - throws an exception if the accessed element is out of bounds.
//    b. [] - no range check.
//    c. front() - gives access to the first element.
//    d. back() - gives access to the last element.
//    e. data() - gives access to the underlying array.
//    f. Size is fixed at compile time.
// 5. Elements are stored in contiguous memory.
// 6. Provides iterators.

int main() {
    // Declaration.
    std::array<int, 5> array0; // array of 5 integers with default value.

    // Initialization.
    std::array<int, 5> array1 = {1, 2, 3, 4, 5};    // Initialization using initializer list
    std::array<int, 5> array2 {1, 2, 3, 4, 5};      // Initialization using uniform initialization

    // Assign using initializer list.
    std::array<int, 5> array3;
    array3 = {1, 2, 3, 4, 5};

    return 0;
}
