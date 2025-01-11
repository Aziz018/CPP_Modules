/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 20:40:35 by aelkheta          #+#    #+#             */
/*   Updated: 2025/01/11 17:33:23 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>

class Intern
{
    private:
        struct FormCreator {
            std::string formName;
            AForm* (Intern::*createFormPtr)(const std::string &target);
        };

        AForm* createShrubberyCreationForm(const std::string &target);
        AForm* createRobotomyRequestForm(const std::string &target);
        AForm* createPresidentialPardonForm(const std::string &target);
        
        // static const FormCreator formCreator[3];

    public:
        Intern();
        Intern(const Intern& intern);
        Intern& operator= (const Intern& copy);
        ~Intern();
        AForm* makeForm(const std::string& formName, const std::string& formTarget);
};

// Define it ouside the class because it's static shared between instances.
// const Intern::FormCreator Intern::formCreator[3] = {
//     {"shrubbery creation", &Intern::createShrubberyCreationForm},
//     {"robotomy request", &Intern::createRobotomyRequestForm},
//     {"presidential pardon", &Intern::createPresidentialPardonForm}
// }

#endif // INTERN_HPP