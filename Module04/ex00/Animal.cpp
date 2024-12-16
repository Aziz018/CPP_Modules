/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 20:25:39 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/16 09:41:00 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal() {
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

Dog::Dog() {
    std::cout << "Dog default constructor was called." << std::endl;
}
Dog::Dog( const Dog& dog ) {
    this->type = dog.type;
    std::cout << "Dog copy constructor was called." << std::endl;
}
Dog& Dog::operator= ( const Dog& copy ) {
    if (this != &copy) {
        this->type = copy.type;
    }
    return *this;
}
Dog::~Dog() {
    std::cout << "Dog destructor was called." << std::endl;
}
void Dog::makeSound() const {
    std::cout << "Dog bark 🐶🐶" << std::endl;
}

Cat::Cat() {
    std::cout << "Cat default constructor was called." << std::endl;
}
Cat::Cat( const Cat& cat ) {
    this->type = cat.type;
    std::cout << "Cat copy constructor was called." << std::endl;
}
Cat& Cat::operator= ( const Cat& copy ) {
    if (this != &copy) {
        this->type = copy.type;
    }
    return *this;
}
Cat::~Cat() {
    std::cout << "Cat destructor was called." << std::endl;
}
void Cat::makeSound() const {
    std::cout << "Cat Meows 🐱🐱" << std::endl;
}
