/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 09:24:55 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/25 13:46:14 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Character.hpp>

// # define nullptr NULL

Character::Character() : _name("Undefined") {
    for (int i = 0; i < 4; i++) {
        this->_slotes[i] = NULL;
    }
    std::cout << "Character default constructor called" << std::endl;
}

Character::Character(const std::string& name) : _name(name) {
    for (int i = 0; i < 4; i++) {
        this->_slotes[i] = NULL;
    }
    std::cout << "Character param constructor called" << std::endl;
}

Character::Character(const Character& character) : _name(character._name) {
    for (int i = 0; i < 4; i++) {
        if (character._slotes[i]) {
            this->_slotes[i] = character._slotes[i]->clone();
        }
        else {
            this->_slotes[i] = NULL;
        }
    }
    std::cout << "Character copy constructor called" << std::endl;
}

Character Character::operator= (const Character& copy) {
    if (this != &copy) {
        this->_name = copy._name;
        for (int i = 0; i < 4; i++) {
            if (this->_slotes[i]) {
                delete this->_slotes[i];
            }
            if (copy._slotes[i]) {
                this->_slotes[i] = copy._slotes[i]->clone(); // clone new materia (deep copy)
            }
            else {
                this->_slotes[i] = NULL;
            }
            this->_slotes[i] = copy._slotes[i];
        }
    }
    return *this;
}

std::string const &Character::getName() const {
    return this->_name;
}

void Character::equip(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (this->_slotes[i] == NULL) {
            this->_slotes[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx <= 3) {
        this->_slotes[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx <= 3 && this->_slotes[idx]) {
        this->_slotes[idx]->use(target);
    }
}

Character::~Character() {
    for (int i = 0; i < 4; i++) {
        delete this->_slotes[i];
    }
    std::cout << "Character destructor called" << std::endl;
} // destructor
