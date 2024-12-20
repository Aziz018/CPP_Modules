/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 09:43:57 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/20 19:58:04 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    std::cout << "FragTrap default constructor was called." << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap( const std::string& name ) : ClapTrap(name) {
    std::cout << "FragTrap param constructor was called." << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap& FragTrap::operator= (const FragTrap& copy) {
    if (this != &copy) {
        this->name = copy.name;
        this->hitPoints = copy.hitPoints;
        this->energyPoints = copy.energyPoints;
        this->attackDamage = copy.attackDamage;
    }
    return *this;
}

FragTrap::FragTrap( const FragTrap& fragtrap ) : ClapTrap(fragtrap) {
    std::cout << "FragTrap copy constructor was called." << std::endl;
    *this = fragtrap;
}

void FragTrap::attack(const std::string& target) {
    if (this->energyPoints == 0 || this->hitPoints == 0) {
        std::cout << "FragTrap " << this->name << " can not attacks." << std::endl;
        return ;
    }
    this->energyPoints -= 1;
    std::cout << "FragTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor was called." << std::endl;
}

void highFivesGuys(void) {
    std::cout << "high fives" << std::endl;
}
