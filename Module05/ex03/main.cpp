/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 18:25:42 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/11 17:57:01 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <Intern.hpp>

int main() {
    try {
        Intern intern;
        Bureaucrat b1("Alice", 1);

        AForm* form1 = intern.makeForm("shrubbery creation", "home");
        AForm* form2 = intern.makeForm("robotomy request", "robot");
        AForm* form3 = intern.makeForm("presidential pardon", "president");
        AForm* form4 = intern.makeForm("invalid form", "target"); // Form does not exist!!

        if (form1) {
            b1.signForm(*form1);
            b1.executeForm(*form1);
            delete form1;
        }
        if (form2) {
            b1.signForm(*form2);
            b1.executeForm(*form2);
            delete form2;
        }
        if (form3) {
            b1.signForm(*form3);
            b1.executeForm(*form3);
            delete form3;
        }
        if (form4) {
            delete form4;
        }
    }
    catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}