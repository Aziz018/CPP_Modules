/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:52:59 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/02/01 17:53:00 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RPN.hpp>

int main(int ac, char* av[]) {
    if (ac != 2) {
        std::cerr << "Usage: " << av[0] << " \"expression\"" << std::endl;
        return 1;
    }
    
    RPN calc;
    try {
        int result = calc.evaluate(av[1]);
        std::cout << result << std::endl;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}