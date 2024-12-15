/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:10:28 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/14 09:54:35 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << "ScavTrap default constructor was called." << std::endl;
}

ScavTrap::ScavTrap( const std::string& name) : ClapTrap(name) {
    std::cout << "ScavTrap param constructor was called." << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap& scavtrap ) : ClapTrap(scavtrap) {
    std::cout << "ScavTrap copy constructor was called." << std::endl;
    *this = scavtrap;
}

ScavTrap& ScavTrap::operator= (const ScavTrap& copy) {
    if (this != &copy) {
        this->name = copy.name;
        this->hitPoints = copy.hitPoints;
        this->energyPoints = copy.energyPoints;
        this->attackDamage = copy.attackDamage;
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor was called." << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}