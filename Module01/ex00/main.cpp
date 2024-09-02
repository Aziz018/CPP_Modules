/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:32:56 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/02 02:52:01 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

class Zombie {
private:
    std::string name;

public:

    // Zombie () : name (0) {}
    
    Zombie (std::string& name) {
        this->name = name;    
    }
    
    ~Zombie() {
        std::cout << "Zombie: " << this->name << " is Dead !" << std::endl;
    }
    
    // void setName( std::string& name ) {
    //     this->name = name;
    // }

    void announce( void ) {
        std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    }
};

int main() {
    Zombie* zooombie = newZombie("aziz");
    zooombie->announce();
    
    std::cout << "----------------------------------" << std::endl;
    
    randomChump("Foo");
    
    delete zooombie;
}