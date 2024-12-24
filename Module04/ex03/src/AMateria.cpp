/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 10:15:46 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/24 10:01:41 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <AMateria.hpp>

AMateria::AMateria() {
    std::cout << "AMateria default constructor called." << std::endl;
}

AMateria::AMateria(std::string const &type) : type(type) {
    std::cout << "AMateria param constructor called." << std::endl;
}

std::string const& AMateria::getType() const { //Returns the materia type
    return this->type;
}

// virtual AMateria* clone() const = 0;

void AMateria::use(ICharacter& target) {
    
}
