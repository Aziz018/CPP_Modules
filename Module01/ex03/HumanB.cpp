/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:19:47 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/21 20:45:15 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(const std::string name) : name(name), weapon(NULL) {}

HumanB::~HumanB() {
    std::cout << "HumanB is destroyed." << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;
}

void HumanB::attack(void) {
    std::cout << this->name << " attacks with their "
              << this->weapon->getType() << std::endl;
}
