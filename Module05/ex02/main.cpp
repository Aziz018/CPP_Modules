/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 18:25:42 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/11 17:57:50 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>

int main() {
    try {
        Bureaucrat b1("Alice", 1);
        Bureaucrat b2("Bob", 150);

        ShrubberyCreationForm f1("home");
        RobotomyRequestForm f2("robot");
        PresidentialPardonForm f3("president");

        b1.signForm(f1);
        b1.signForm(f2);
        b1.signForm(f3);

        b1.executeForm(f1);
        b1.executeForm(f2);
        b1.executeForm(f3);

        b2.executeForm(f1); // grade too low!!
    }
    catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}