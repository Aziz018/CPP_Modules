/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 08:43:49 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/13 13:35:08 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScalarConverter.hpp>

int main(int ac, char *av[]) {
    if (ac != 2) {
        std::cerr << "Invalid arguments!" << std::endl;
        std::cout << "Try: " << av[0] << " literal" << std::endl;
        return 1;
    }
    // ScalarConverter converter;    
    ScalarConverter::convert(std::string(av[1]));

    return 0;
}