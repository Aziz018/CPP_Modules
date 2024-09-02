/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:33:01 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/02 07:20:07 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

// class Zombie {
// private:
//     std::string name;

// public:

//     // Zombie () : name (0) {}
    
//     Zombie (std::string& name) {
//         this->name = name;    
//     }
    
//     ~Zombie() {
//         std::cout << "Zombie: " << this->name << " is Dead !" << std::endl;
//     }
    
//     // void setName( std::string& name ) {
//     //     this->name = name;
//     // }

//     void announce( void ) {
//         std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
//     }
// };


Zombie::Zombie (std::string& name) {
    this->name = name;    
}
    
Zombie::~Zombie() {
    std::cout << "Zombie: " << this->name << " is Dead !" << std::endl;
}

void Zombie::announce( void ) {
        std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    }
