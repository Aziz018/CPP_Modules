/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 09:25:38 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/25 14:08:10 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <MateriaSource.hpp>

// # define NULL NULL

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++) {
        this->_materia[i] = NULL;
    }
    // std::cout << "MateriaSource default constructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (this->_materia[i] == NULL) {
            this->_materia[i] = m;
            return ;
        }
    }
    delete m;
    std::cout << "MateriaSource is full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type) {
    for (int i = 0; i < 4; i++) {
        if (this->_materia[i] && this->_materia[i]->getType() == type) {
            return this->_materia[i]->clone();
        }
    }
    std::cout << "MateriaSource does not have this type of materia" << std::endl;
    return NULL;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        delete this->_materia[i];
    }
    // std::cout << "MateriaSource destructor called" << std::endl;
}
