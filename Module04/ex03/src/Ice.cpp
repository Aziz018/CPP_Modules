/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 09:24:28 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/26 16:28:25 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Ice.hpp>

// Ice concrete class implementation:
Ice::Ice() : AMateria("ice") {
    // std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice( std::string const& type) : AMateria(type) {
    // std::cout << "Ice param constructor called" << std::endl;
}

Ice::Ice(const Ice& ice) : AMateria(ice.type) {
    // std::cout << "Ice copy constructor called" << std::endl;
}

Ice Ice::operator= (const Ice& copy) {
    if (this != &copy) {
        this->type = copy.type;
    }
    return *this;
}

AMateria* Ice::clone() const {
    return (new Ice());
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice() {
    // std::cout << "Ice destructor called" << std::endl;
}
