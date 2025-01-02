/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:59:17 by aelkheta          #+#    #+#             */
/*   Updated: 2025/01/02 14:36:32 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Bureaucrat.hpp>

int main ()
{
    // Test 1:
    std::cout << std::endl << "──────────── Test 1 start ────────────" << std::endl << std::endl;
    try {
        Bureaucrat b1("bureaucrat", 0);
    }
    catch(Bureaucrat::GradeTooHighException& e) {
        std::cout << "Bureaucrat::GradeTooHighException" << std::endl;
        std::cout << e.what();
    }
    catch(Bureaucrat::GradeTooLowException& e) {
        std::cout << "Bureaucrat::GradeTooLowException" << std::endl;
        std::cout << e.what();
    }
    catch(std::exception& e) {
        std::cout << e.what();
    }

    std::cout << std::endl;

    // Test 2:
    std::cout << std::endl << "──────────── Test 2 start ────────────" << std::endl << std::endl;
    try {
        Bureaucrat b2("bureaucrat", 12);
        std::cout << b2 << std::endl;
    }
    catch(...) {
        std::cerr << "Unknown exception" << std::endl;
    }

    return 0;
}