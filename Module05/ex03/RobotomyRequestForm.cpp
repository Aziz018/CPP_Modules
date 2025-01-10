/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 18:25:48 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/08 18:23:39 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RobotomyRequestForm.hpp>
#include <Bureaucrat.hpp>
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm()
        : AForm("RobotomyRequestForm", 72, 45), _target("Undefined") {
    std::cout << "RobotomyRequestForm default constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& robotomyRequestForm) : AForm(robotomyRequestForm) {
    *this = robotomyRequestForm;
    std::cout << "RobotomyRequestForm copy constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) 
        : AForm("RobotomyRequestForm", 72, 45), _target(target) {
    std::cout << "RobotomyRequestForm param constructor called." << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator= (const RobotomyRequestForm& copy) {
    if (this != &copy) {
        AForm::operator=(copy);
        this->_target = copy._target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm destructor called." << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    if (!getIsSigned()) {
        throw AForm::FormNotSigned("Form not signed");
    }
    if (executor.getGrade() > getGradeToExec()) {
        throw AForm::GradeTooLowException("Grade too low");
    }

    std::cout << "Drilling noises..." << std::endl;

    std::srand(std::time(0));
    if (std::rand() % 2 == 0) {
        std::cout << this->_target << " has been robotomized successfully!" << std::endl;
    }
    else {
        std::cout << "The robotomy failed." << std::endl;
    }
}
