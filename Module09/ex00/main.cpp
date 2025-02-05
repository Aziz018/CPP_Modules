/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:30:00 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/02/05 20:22:42 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <BitcoinExchange.hpp>

int main(int ac, char **av)
{
    if (ac != 2) {
        std::cerr << "Error: bad argument" << std::endl;
        std::cout << "usage: " << av[0] << " [database file]" << std::endl;
    }
    
    try
    {
        BitcoinExchange bitcoin(av[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}
