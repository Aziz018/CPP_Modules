/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 17:25:53 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/20 19:49:51 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap() {
    this->name = "Unknown";
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap: " << this->name << " is created" << std::endl;
    std::cout << "DiamondTrap default constructed was called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), FragTrap(other) ,ScavTrap(other) {
    std::cout << "DiamondTrap copy constructed was called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &copy) {
    if (this != &copy) {
        this->name = copy.name;
        this->hitPoints = FragTrap::hitPoints;
        this->energyPoints = ScavTrap::energyPoints;
        this->attackDamage = FragTrap::attackDamage;
    }
    return *this;
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
    std::cout << "DiamondTrap name: " << this->name 
              << ", ClapTrap name: " << ClapTrap::name;
}
