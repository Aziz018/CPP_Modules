/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:13:58 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/30 08:24:27 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Cat.hpp>

Cat::Cat() : Animal(), brain(new Brain()) {
    this->type = "Cat";
    std::cout << "Cat default constructor was called." << std::endl;
}

Cat::Cat( const Cat& cat ) : Animal(cat), brain(new Brain(*(cat.brain))) {
    // this->type = cat.type;
    std::cout << "Cat copy constructor was called." << std::endl;
}

Cat& Cat::operator= ( const Cat& copy ) {
    if (this != &copy) {
        this->Animal::operator=(copy);
        delete this->brain;
        brain = new Brain(*(copy.brain)); 
        // (*this->brain) = (*copy.brain);
        // this->type = copy.type;
    }
    return *this;
}

Cat::~Cat() {
    delete brain;
    std::cout << "Cat destructor was called." << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Cat Meows 🐱🐱" << std::endl;
}

// const std::string& Cat::getType() const {
//     return this->type;
// }
