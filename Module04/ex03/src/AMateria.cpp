/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 10:15:46 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/26 09:16:32 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Character.hpp>
# include <AMateria.hpp>
# include <Cure.hpp>
# include <Ice.hpp>

AMateria::AMateria() : type("Undefined") {
    // std::cout << "AMateria default constructor called." << std::endl;
}

AMateria::AMateria(std::string const &type) : type(type) {
    // std::cout << "AMateria param constructor called." << std::endl;
}

AMateria::AMateria(const AMateria &amateria) {
    this->type = amateria.type;
    // std::cout << "AMateria copy constructor called." << std::endl;
}

AMateria& AMateria::operator= (const AMateria &copy) {
    if (this != &copy) {
        this->type = copy.getType();
    }
    return *this;
}

/// @brief AMateria methode member function.
/// @return the type of the AMateria.
std::string const& AMateria::getType() const {
    return this->type;
}

AMateria::~AMateria() {
    // std::cout << "AMateria destructor called." << std::endl;
}
