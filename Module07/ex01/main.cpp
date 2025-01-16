/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:53:21 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/16 17:36:14 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iter.hpp>
#include <vector>

#define SIZE 10

template <typename T>
void print(T &type) {
    std::cout << type << std::endl;
}

int main() {
    std::string a[SIZE];
    for (size_t i = 0; i < SIZE; i++)
    {
        a[i] = "Aziz";
    }

    iter(a, SIZE, print);

    return 0;
}
