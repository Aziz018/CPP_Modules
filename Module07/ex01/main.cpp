/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: p4nd4 <p4nd4@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:53:21 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/05/08 08:37:29 by p4nd4            ###   ########.fr       */
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
    std::cout << std::endl;

    int b[SIZE];
    for (size_t i = 0; i < SIZE; i++)
    {
        b[i] = 55;
    }

    iter(b, SIZE, print);

    return 0;
}
