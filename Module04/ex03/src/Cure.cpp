/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 09:24:42 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/26 16:28:09 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Cure.hpp>

// Cure concrete class implementation:
Cure::Cure() : AMateria("cure") {
    // std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure( std::string const& type) : AMateria(type) {
    // std::cout << "Cure param constructor called" << std::endl;
}

Cure::Cure(const Cure& cure) : AMateria(cure.type) {
    // std::cout << "Cure copy constructor called" << std::endl;
}

Cure Cure::operator= (const Cure& copy) {
    if (this != &copy) {
        this->type = copy.type;
    }
    return *this;
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria* Cure::clone() const {
    return (new Cure());
}

Cure::~Cure() {
    // std::cout << "Cure destructor called" << std::endl;
}
