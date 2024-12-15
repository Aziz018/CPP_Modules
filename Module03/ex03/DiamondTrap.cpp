/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 17:25:53 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/14 18:44:22 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
}

DiamondTrap::DiamondTrap( const DiamondTrap& diamondtrap ) {
}

DiamondTrap::DiamondTrap( const std::string& name ) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(), name(name) {
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::~DiamondTrap() {
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " << this->name << ", ClapTrap name: " << ClapTrap::name;
}
