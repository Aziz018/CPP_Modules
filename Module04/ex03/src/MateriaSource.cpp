/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta < aelkheta@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 09:25:38 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/29 13:32:21 by aelkheta         ###   ########.fr       */
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

MateriaSource::MateriaSource(const MateriaSource& materia_source) {
    for (int i = 0; i < 4; i++) {
        if (materia_source._materia[i]) {
            this->_materia[i] = materia_source._materia[i]->clone();
        }
        else {
            this->_materia[i] = NULL;
        }
    }
    // std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource MateriaSource::operator= (const MateriaSource& copy) {
    if (this != &copy) {
        for (int i = 0; i < 4; i++) {
            if (copy._materia[i]) {
                this->_materia[i] = copy._materia[i]->clone();
            }
            else {
                this->_materia[i] = NULL;
            }
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (this->_materia[i] == NULL) {
            this->_materia[i] = m;
            std::cout << "Materia " << m->getType() << " have learned" << std::endl;
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
    std::cout << "MateriaSource does not have this type of materia " << "(" << type << ")" << std::endl;
    return NULL;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        delete this->_materia[i];
    }
    // std::cout << "MateriaSource destructor called" << std::endl;
}
