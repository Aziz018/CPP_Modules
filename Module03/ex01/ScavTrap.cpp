/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 05:31:01 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/17 23:41:03 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap( const std::string& name ) : ClapTrap ( name ) {
    std::cout << "ScavTrap constructor was called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor was called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &scavTrap ) {
    std::cout << "Copy constructor was called" << std::endl;
    this->Name = scavTrap.getName();
    this->HitPoints = scavTrap.getHitPoints();
    this->EnergyPoints = scavTrap.getEnergyPoints();
    this->AttackDamage = scavTrap.getAttackDamage();
}

ScavTrap& ScavTrap::operator= ( const ScavTrap& copy ) {
    std::cout << "Copy assignment operator was called" << std::endl;
    if (this != &copy) {
        this->setName(copy.getName());
        this->setHitPoints(copy.getHitPoints());
        this->setEnergyPoints(copy.getEnergyPoints());
        this->setAttackDamage(copy.getAttackDamage());
    }
    return *this;
}

void ScavTrap::attack( const std::string& target ) {
    if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0) {
        std::cout << "ScavTrap "<< this->getName() << " attack " << target << std::endl;
        this->setEnergyPoints(this->getEnergyPoints() - 1);
    }
}

void ScavTrap::guardGate() {
    
}
