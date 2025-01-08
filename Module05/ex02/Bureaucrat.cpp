/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:59:13 by aelkheta          #+#    #+#             */
/*   Updated: 2025/01/08 13:25:00 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Bureaucrat.hpp>

Bureaucrat::Bureaucrat() : _name(), _grade(1) {
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, short grade) : _name(name) {
    std::cout << "Bureaucrat param called" << std::endl;
    if (grade < 1) {
        throw Bureaucrat::GradeTooHighException("Grade too hight");
    }
    else if (grade > 150) {
        throw Bureaucrat::GradeTooLowException("Grade too low");    
    }
    else {
        this->_grade = grade;
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat) : _name(bureaucrat._name) {
    std::cout << "Bureaucrat copy called" << std::endl;
    if (bureaucrat._grade < 1) {
        throw Bureaucrat::GradeTooHighException("Grade too hight");
    }
    else if (bureaucrat._grade > 150) {
        throw Bureaucrat::GradeTooLowException("Grade too low");    
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

std::string Bureaucrat::getName() const {
    return this->_name;
}

short Bureaucrat::getGrade() const {
    return this->_grade;    
}

void Bureaucrat::IncrementGrade()
{
    if (this->_grade == 1) {
        throw Bureaucrat::GradeTooHighException("");
    }
    else {
        this->_grade--;
    }
}

void Bureaucrat::DecrementGrade()
{
    if (this->_grade == 150) {
        throw Bureaucrat::GradeTooLowException("");
    }
    else {
        this->_grade++;
    }
}

std::ostream& operator<< (std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade "
       << bureaucrat.getGrade() << ".";
    return os;
}

void Bureaucrat::signForm(AForm& form) {
    try
    {
        form.beSigned(*this);
        std::cout << this->_name << " signed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << this->_name << " couldn't sign "
                  << form.getName() << " because "
                  << e.what() << std::endl;
    }
}

// Define beSigned outside of AForm class to avoid circular dependency
void AForm::beSigned(Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() <= this->getGradeToSign()) {
        this->_isSigned = true;
    }
    else {
        throw AForm::GradeTooLowException("Grade Sign Too Low");
    }
}
