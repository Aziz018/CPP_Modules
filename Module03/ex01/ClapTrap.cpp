/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 01:54:55 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/19 22:23:33 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap( const std::string& name) : Name(name) {
    std::cout << "Default constructor was called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &claptrap ) {
    std::cout << "Copy constructor was called" << std::endl;
    this->Name = claptrap.Name;
    this->HitPoints = claptrap.HitPoints;
    this->EnergyPoints = claptrap.EnergyPoints;
    this->AttackDamage = claptrap.AttackDamage;
}

ClapTrap& ClapTrap::operator= ( const ClapTrap& copy ) {
    std::cout << "Copy assignment operator was called" << std::endl;
    if (this != &copy) {
        this->Name = copy.Name;
        this->HitPoints = copy.HitPoints;
        this->EnergyPoints = copy.EnergyPoints;
        this->AttackDamage = copy.AttackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor was called" << std::endl;
}

// const std::string& ClapTrap::getName() const {
//     return Name;
// }

// const unsigned int& ClapTrap::getHitPoints() const {
//     return HitPoints;
// }

// const unsigned int& ClapTrap::getEnergyPoints() const {
//     return EnergyPoints;
// }

// const unsigned int& ClapTrap::getAttackDamage() const {
//     return AttackDamage;
// }

// void ClapTrap::setName( std::string& name ) {
//     this->Name = name;    
// }

// void ClapTrap::setHitPoints( unsigned int hitPoint ) {
//     this->HitPoints = hitPoint;
// }

// void ClapTrap::setEnergyPoints( unsigned int energiePoint ) {
//     this->EnergyPoints = energiePoint;
// }

// void ClapTrap::setAttackDamage( unsigned int attackDamage ) {
//     this->AttackDamage = attackDamage;
// }

void ClapTrap::attack( const std::string& target ) {
    if (this->EnergyPoints > 0 && this->HitPoints > 0) {
        std::cout << "ClapTrap "<< this->Name << " attack " << target << std::endl;
        this->EnergyPoints -= 1;
    }
}

void ClapTrap::takeDamage( unsigned int amount ) {
    if (this->EnergyPoints > 0 && this->HitPoints > 0) {
        std::cout << this->Name << " causing " << amount << " points of damage!" << std::endl;
        this->AttackDamage += amount;
        this->HitPoints -= amount;
    }
}

void ClapTrap::beRepaired( unsigned int amount ) {
    if (this->EnergyPoints > 0 && this->HitPoints > 0) {
        std::cout << this->Name << " repairs itself" << std::endl;
        this->HitPoints += amount;
        this->EnergyPoints -= 1;
    }
}
