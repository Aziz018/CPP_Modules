/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:30:00 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/02/01 17:48:52 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if (ac != 2) {
        std::cerr << "Error: bad argument" << std::endl;
        std::cout << "usage: " << av[0] << " [database file]" << std::endl;
    }
    

    return 0;
}
