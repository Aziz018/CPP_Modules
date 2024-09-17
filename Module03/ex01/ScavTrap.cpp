/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 05:31:01 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/17 23:45:14 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap( const std::string& name ) : ClapTrap ( name ) {
    std::cout << "ScavTrap constructor was called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor was called" << std::endl;
}

void ScavTrap::attack( const std::string& target ) {
    if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0) {
        std::cout << "ScavTrap "<< this->getName() << " attack " << target << std::endl;
        this->setEnergyPoints(this->getEnergyPoints() - 1);
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
