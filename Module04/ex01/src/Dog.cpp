/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:25:33 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/17 14:42:25 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Dog.hpp>

Dog::Dog() : brain(new Brain) {
    this->type = "Dog";
    std::cout << "Dog default constructor was called." << std::endl;
}

Dog::Dog( const Dog& dog ) : Animal(dog) {
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
    delete brain;
    std::cout << "Dog destructor was called." << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Dog bark 🐶🐶" << std::endl;
}
