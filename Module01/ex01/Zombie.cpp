/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:19:28 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/02 22:02:45 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

/// @brief Constructor of the zombie class.
/// @param name Name of the zombie that should be initialized.
// Zombie::Zombie (std::string& name) : name(name) {}

/// @brief Destructor for the zombie class.
Zombie::~Zombie() {
    std::cout << "Zombie: " << this->name << " is Dead!" << std::endl;
}

/// @brief Function member inside the class that announce the the zombie object.
void Zombie::announce( void ) {
        std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName( std::string& name ) {
    this->name = name;    
}

std::string Zombie::getName( void ) {
    return ( this->name );
}
