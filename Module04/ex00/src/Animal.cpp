/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 20:25:39 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/30 08:08:11 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Animal.hpp>

Animal::Animal() : type("Undefined") {
    std::cout << "Animal default constructor was called." << std::endl;
}

Animal::Animal( const Animal& animal ) {
    this->type = animal.type;
    std::cout << "Animal copy constructor was called." << std::endl;
}

Animal& Animal::operator= ( const Animal& copy ) {
    if (this != &copy) {
        this->type = copy.type;
    }
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destructor was called." << std::endl;
}

void Animal::makeSound() const {
    std::cout << "Animal make sound" << std::endl;
}

const std::string& Animal::getType() const {
    return this->type;
}
