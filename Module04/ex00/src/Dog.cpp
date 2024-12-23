/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:14:40 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/23 06:38:17 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Dog.hpp>

Dog::Dog() : Animal() {
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
    std::cout << "Dog destructor was called." << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Dog bark 🐶🐶" << std::endl;
}

// const std::string& Dog::getType() const {
//     return this->type;
// }
