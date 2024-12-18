/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:29:58 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/18 09:43:21 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Cat.hpp>

Cat::Cat() : brain(new Brain()) {
    this->type = "Cat";
    std::cout << "Cat default constructor was called." << std::endl;
}

Cat::Cat( const Cat& cat ) : Animal(cat), brain(new Brain(*(cat.brain))) {
    std::cout << "Cat copy constructor was called." << std::endl;
}

Cat& Cat::operator= ( const Cat& copy ) {
    if (this != &copy) {
        this->Animal::operator=(copy);
        *(this->brain) = *(copy.brain);
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
