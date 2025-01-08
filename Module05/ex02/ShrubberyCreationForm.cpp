/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 18:25:55 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/08 18:27:22 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ShrubberyCreationForm.hpp>
#include <fstream>
#include <Bureaucrat.hpp>

ShrubberyCreationForm::ShrubberyCreationForm()
        : AForm("Shrubbery Creation Form", 145, 137), _target("Undefined") {
    std::cout << "ShrubberyCreationForm constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& shrubberyCreationForm) : AForm(shrubberyCreationForm) {
    *this = shrubberyCreationForm;
    std::cout << "ShrubberyCreationForm copy constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
        : AForm("Shrubbery Creation Form", 145, 137), _target(target) {
    std::cout << "ShrubberyCreationForm copy constructor called." << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm& copy) {
    if (this != &copy) {
        AForm::operator=(copy);
        this->_target = copy._target;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm destructor called." << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    if (!getIsSigned()) {
        throw AForm::FormNotSigned("Form not signed");
    }
    if (executor.getGrade() > getGradeToExec()) {
        throw AForm::GradeTooLowException("Grade too low");
    }

    std::ofstream file((_target + "_shrubbery").c_str());
    if(file.is_open()) {
        file << "       _-_\n"
        << "    /~~   ~~\\\n"
        << " /~~         ~~\\\n"
        << "{               }\n"
        << " \\  _-     -_  /\n"
        << "   ~  \\ //  ~\n"
        << "_- -   | | _- _\n"
        << "  _ -  | |   -_\n"
        << "      // \\\\\n"
        << std::endl;
        file.close();
    }
}
