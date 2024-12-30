/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 09:24:55 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/30 09:16:19 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Character.hpp>

// # define nullptr NULL

Character::Character() : _name("Undefined") {
    for (int i = 0; i < 4; i++) {
        this->_saved[i] = NULL;
        this->_slotes[i] = NULL;
    }
    // std::cout << "Character default constructor called" << std::endl;
}

Character::Character(const std::string& name) : _name(name) {
    for (int i = 0; i < 4; i++) {
        this->_saved[i] = NULL;
        this->_slotes[i] = NULL;
    }
    // std::cout << "Character param constructor called" << std::endl;
}

Character::Character(const Character& character) : _name(character._name) {
    for (int i = 0; i < 4; i++) {
        if (character._slotes[i]) {
            this->_slotes[i] = character._slotes[i]->clone();
        }
        else {
            this->_slotes[i] = NULL;
        }
        this->_saved[i] = NULL;
    }
    // std::cout << "Character copy constructor called" << std::endl;
}

Character Character::operator= (const Character& copy) {
    std::cout << "operator = called" << std::endl;
    if (this != &copy) {
        this->_name = copy._name;
        for (int i = 0; i < 4; i++) {
            if (this->_slotes[i]) {
                delete this->_slotes[i];
                this->_slotes[i] = NULL;
            }
            if (copy._slotes[i]) {
                this->_slotes[i] = copy._slotes[i]->clone(); // clone new materia (deep copy)
            }
            else {
                this->_slotes[i] = NULL;
            }
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
    delete m;
    std::cout << "Character is full" << std::endl;
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx <= 3 && this->_slotes[idx]) {
        this->_saved[idx] = this->_slotes[idx];
        this->_slotes[idx] = NULL;
        return ;
    }
    std::cout << "Character slot is empty or invalid index" << std::endl;
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx <= 3 && this->_slotes[idx]) {
        this->_slotes[idx]->use(target);
    }
    else {
        std::cout << "Character slot is empty or ivalid index" << std::endl;
    }
}

Character::~Character() {
    for (int i = 0; i < 4; i++) {
        delete this->_slotes[i];
        delete this->_saved[i];
    }
    // std::cout << "Character destructor called" << std::endl;
} // destructor
