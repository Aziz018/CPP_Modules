/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 09:39:12 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/16 09:42:51 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal default constructor was called." << std::endl;
}
WrongAnimal::WrongAnimal( const WrongAnimal& animal ) {
    this->type = animal.type;
    std::cout << "WrongAnimal copy constructor was called." << std::endl;
}
WrongAnimal& WrongAnimal::operator= ( const WrongAnimal& copy ) {
    if (this != &copy) {
        this->type = copy.type;
    }
    return *this;
}
WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor was called." << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal make sound" << std::endl;
}

const std::string& WrongAnimal::getType() const {
    return this->type;
}

WrongCat::WrongCat() {
    std::cout << "WrongCat default constructor was called." << std::endl;
}
WrongCat::WrongCat( const WrongCat& cat ) {
    this->type = cat.type;
    std::cout << "WrongCat copy constructor was called." << std::endl;
}
WrongCat& WrongCat::operator= ( const WrongCat& copy ) {
    if (this != &copy) {
        this->type = copy.type;
    }
    return *this;
}
WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor was called." << std::endl;
}
void WrongCat::makeSound() const {
    std::cout << "WrongCat Meows 🐱🐱" << std::endl;
}
