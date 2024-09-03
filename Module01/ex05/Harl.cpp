/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:37:52 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/03 17:13:18 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug( void ) {
    std::cout << "DEBUG level: love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::info( void ) {
    std::cout << "INFO level: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void ) {
    std::cout << "WARNING level: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ) {
    std::cout << "ERROR level: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level ) {
    harlCompalinFunction[0] = &Harl::debug;
    harlCompalinFunction[1] = &Harl::info;
    harlCompalinFunction[2] = &Harl::warning;
    harlCompalinFunction[3] = &Harl::error;

    compalinLevel[0] = "debug";
    compalinLevel[1] = "info";
    compalinLevel[2] = "warning";
    compalinLevel[3] = "error";

    for (int i = 0; i < 4; i++) {
        if (level == compalinLevel[i])
            (this->*harlCompalinFunction[i])();
    }
}
