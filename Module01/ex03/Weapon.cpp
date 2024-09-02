/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:19:56 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/02 23:34:00 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Implement a Weapon class that has:
// • A private attribute type, which is a string.
// • A getType() member function that returns a const reference to type.
// • A setType() member function that sets type using the new one passed as param- eter.

# include "Weapon.hpp"

Weapon::~Weapon() {
    std::cout << "Weapon is destroyed." << std::endl;
}

const std::string& Weapon::getType() {
    return (this->type);
}
void Weapon::setType(const std::string& newType) {
    this->type = newType;
}

