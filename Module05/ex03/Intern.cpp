/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 20:40:32 by aelkheta          #+#    #+#             */
/*   Updated: 2025/01/11 18:09:22 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Intern.hpp>

Intern::Intern() {}
Intern::Intern(const Intern& intern) {
    (void) intern;
}
Intern& Intern::operator= (const Intern& copy) {
    (void) copy;
    return *this;
}

AForm* Intern::createShrubberyCreationForm(const std::string &target) {
    return new ShrubberyCreationForm(target);
}

AForm* Intern::createRobotomyRequestForm(const std::string &target) {
    return new RobotomyRequestForm(target);
}

AForm* Intern::createPresidentialPardonForm(const std::string &target) {
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(const std::string& formName, const std::string& formTarget) {
    struct FormCreator {
        const std::string formName;
        AForm* (Intern::*createForm)(const std::string& targetName);
    };
    
    FormCreator formCreator[3] = {
        {"shrubbery creation", &Intern::createShrubberyCreationForm},
        {"robotomy request", &Intern::createRobotomyRequestForm},
        {"presidential pardon", &Intern::createPresidentialPardonForm}
    };

    for (size_t i = 0; i < 3; i++) {
        if (formCreator[i].formName == formName) {
            std::cout << "Intern creates " << formName << std::endl;
            return (this->*formCreator[i].createForm)(formTarget);
        }
    }
    std::cerr << "Form named " << formName << " does not exit (just in your mind)!" << std::endl;
    return NULL;
}

Intern::~Intern() {}