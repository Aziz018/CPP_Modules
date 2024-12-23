/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:14:40 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/23 09:57:52 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Dog.hpp>

Dog::Dog() : Animal(), brain(new Brain()) {
    this->type = "Dog";
    std::cout << "Dog default constructor was called." << std::endl;
}

Dog::Dog( const Dog& dog ) : Animal(dog), brain(new Brain(*(dog.brain))) {
    // this->type = dog.type;
    std::cout << "Dog copy constructor was called." << std::endl;
}

Dog& Dog::operator= ( const Dog& copy ) {
    if (this != &copy) {
        this->Animal::operator=(copy);
        delete this->brain;
        brain = new Brain(*(copy.brain)); // to do

        // *(this->brain) = *(copy.brain);
        // this->type = copy.type;
    }
    return *this;
}

Dog::~Dog() {
    delete this->brain;
    std::cout << "Dog destructor was called." << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Dog bark 🐶🐶" << std::endl;
}

const std::string& Dog::getType() const {
    return this->type;
}
