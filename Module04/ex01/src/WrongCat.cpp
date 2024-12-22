/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 11:01:18 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/22 11:01:36 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <WrongCat.hpp>

WrongCat::WrongCat() : WrongAnimal() {
    std::cout << "WrongCat default constructor was called." << std::endl;
}

WrongCat::WrongCat( const WrongCat& cat ) : WrongAnimal(cat) {
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

const std::string& WrongCat::getType() const {
    return this->type;
}