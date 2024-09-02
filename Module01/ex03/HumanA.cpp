/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:19:42 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/02 23:23:43 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {}

HumanA::~HumanA() {
    std::cout << "HumanA is destroyed." << std::endl;
}

void HumanA::attack(void) {
    std::cout << this->name << " attacks with their "
              << this->weapon.getType() << std::endl;
}
