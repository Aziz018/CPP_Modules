/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 17:25:53 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/20 18:58:45 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    std::cout << "DiamondTrap default constructed was called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& diamondtrap ) {
    std::cout << "DiamondTrap copy constructed was called" << std::endl;
}

DiamondTrap::DiamondTrap( const std::string& name ) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(), name(name) {
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap Destructor was called" << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " << this->name << ", ClapTrap name: " << ClapTrap::name;
}
