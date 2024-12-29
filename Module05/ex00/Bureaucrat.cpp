/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta < aelkheta@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:59:13 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/29 20:35:18 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Bureaucrat.hpp>

Bureaucrat::Bureaucrat() : _name(), _grade(1) {
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, short grade) : _name(name) {
    if (grade < 1) {
        throw GradeTooHighException("Grade too hight");
    }
    else if (grade > 150) {
        throw GradeTooHighException("Grade too low");    
    }
    else {
        this->_grade = grade;
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat) : _name(bureaucrat._name) {
    if (bureaucrat._grade < 1) {
        throw GradeTooHighException("Grade too hight");
    }
    else if (bureaucrat._grade > 150) {
        throw GradeTooHighException("Grade too low");    
    }
    else {
        this->_grade = bureaucrat._grade;
    }
}

Bureaucrat Bureaucrat::operator= (const Bureaucrat& copy) {
    if (this != &copy) {
        this->_grade = copy._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat destructor called" << std::endl;
}
