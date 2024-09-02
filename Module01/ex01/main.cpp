/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:19:09 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/02 08:15:46 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include "Zombie.hpp"

int main() {
    int N = 5; // Number of strings

    // Allocate an array of N std::string objects
    std::string* strings = new std::string[N];

    // Initialize the strings
    for (int i = 0; i < N; ++i) {
        strings[i] = "String " + std::string("aziz");
    }

    // Print the strings
    for (int i = 0; i < N; ++i) {
        std::cout << strings[i] << std::endl;
    }

    // Clean up the allocated memory
    delete[] strings;

    return 0;
}
