/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:25:58 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/13 16:56:57 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name(), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
    std::cout << "Default constractor was called." << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0) {    
}

ClapTrap::ClapTrap(const ClapTrap& claptrap) {
    this->Name = claptrap.Name;
    this->HitPoints = claptrap.HitPoints;
    this->EnergyPoints = claptrap.EnergyPoints;
    this->AttackDamage = claptrap.AttackDamage;
}

ClapTrap& ClapTrap::operator= (const ClapTrap& copy) {
    if (this != &copy) {
        this->Name = copy.Name;
        this->HitPoints = copy.HitPoints;
        this->EnergyPoints = copy.EnergyPoints;
        this->AttackDamage = copy.AttackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "Default destractor was called." << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (this->EnergyPoints == 0 || this->HitPoints == 0) {
        std::cout << "ClapTrap " << this->Name << " can not attacks." << std::endl;
        return ;
    }
    this->EnergyPoints -= 1;
    std::cout << "ClapTrap " << this->Name << " attacks " << target << " causing " << this->AttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->HitPoints == 0) {
        std::cout << "ClapTrap " << this->Name << " aleady dead!" << std::endl;
        return ;
    }
    if (this->HitPoints <= amount) {
        this->HitPoints = 0;
    } else {
        this->HitPoints -= amount;
    }
    std::cout << "ClapTrap " << this->Name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->HitPoints == 0 || this->EnergyPoints == 0) {
        std::cout << "ClapTrap " << this->Name << " can not be repaired." << std::endl;
        return ;
    }
    this->EnergyPoints -= 1;
    this->HitPoints += amount;
    std::cout << "ClapTrap " << this->Name << " repairs itself, restoring " << amount << " hit points!" << std::endl;
}
