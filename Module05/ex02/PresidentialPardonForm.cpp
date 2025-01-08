/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 18:25:44 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/08 18:24:02 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PresidentialPardonForm.hpp>
#include <Bureaucrat.hpp>

PresidentialPardonForm::PresidentialPardonForm()
        : AForm("PresidentialPardonForm", 25, 5), _target("Undefined") {
    std::cout << "PresidentialPardonForm default constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& presidentialPardonForm) : AForm(presidentialPardonForm) {
    *this = presidentialPardonForm;
    std::cout << "PresidentialPardonForm copy constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
        : AForm("PresidentialPardonForm", 25, 5), _target(target) {
            std::cout << "" << std::endl;
    std::cout << "PresidentialPardonForm param constructor called." << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator= (const PresidentialPardonForm& copy) {
    if (this != &copy) {
        AForm::operator=(copy);
        this->_target = copy._target;
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm destructor called." << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
    if (!getIsSigned())
        throw FormNotSigned("Form not signed!");
    if (executor.getGrade() > getGradeToExec())
        throw GradeTooLowException("Grade too low!");

    std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
