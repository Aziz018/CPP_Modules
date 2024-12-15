/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:25:58 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/14 09:09:25 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name(), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "Default constractor was called." << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {    
}

ClapTrap::ClapTrap(const ClapTrap& claptrap) {
    this->name = claptrap.name;
    this->hitPoints = claptrap.hitPoints;
    this->energyPoints = claptrap.energyPoints;
    this->attackDamage = claptrap.attackDamage;
}

ClapTrap& ClapTrap::operator= (const ClapTrap& copy) {
    if (this != &copy) {
        this->name = copy.name;
        this->hitPoints = copy.hitPoints;
        this->energyPoints = copy.energyPoints;
        this->attackDamage = copy.attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "Default destractor was called." << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (this->energyPoints == 0 || this->hitPoints == 0) {
        std::cout << "ClapTrap " << this->name << " can not attacks." << std::endl;
        return ;
    }
    this->energyPoints -= 1;
    std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->hitPoints == 0) {
        std::cout << "ClapTrap " << this->name << " aleady dead!" << std::endl;
        return ;
    }
    if (this->hitPoints <= amount) {
        this->hitPoints = 0;
    } else {
        this->hitPoints -= amount;
    }
    std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->hitPoints == 0 || this->energyPoints == 0) {
        std::cout << "ClapTrap " << this->name << " can not be repaired." << std::endl;
        return ;
    }
    this->energyPoints -= 1;
    this->hitPoints += amount;
    std::cout << "ClapTrap " << this->name << " repairs itself, restoring " << amount << " hit points!" << std::endl;
}
