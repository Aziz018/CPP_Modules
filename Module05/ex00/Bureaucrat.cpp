/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta1337@student.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:59:13 by aelkheta          #+#    #+#             */
/*   Updated: 2025/01/01 17:21:41 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Bureaucrat.hpp>
# include <GradeExceptions.hpp>

Bureaucrat::Bureaucrat() : _name(), _grade(1) {
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, short grade) : _name(name) {
    std::cout << "Bureaucrat param called" << std::endl;
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
    std::cout << "Bureaucrat copy called" << std::endl;
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

Bureaucrat& Bureaucrat::operator= (const Bureaucrat& copy) {
    if (this != &copy) {
        this->_grade = copy._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat destructor called" << std::endl;
}

std::string Bureaucrat::getName() {
    return this->_name;
}

short Bureaucrat::getGrade() {
    return this->_grade;    
}
