/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta < aelkheta@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:59:15 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/29 20:34:40 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class GradeTooLowException : public std::exception {
    private:
        std::string _message;
    public:
        GradeTooLowException(const std::string msg) : _message(msg) {}
        const char* what() const throw() {
            return _message.c_str();
        }
        ~GradeTooLowException() throw() {}
};

class GradeTooHighException : public std::exception {
    private:
        std::string _message;
    public:
        GradeTooHighException(const std::string msg) : _message(msg) {}
        const char* what() const throw() {
            return _message.c_str();
        }
        ~GradeTooHighException() throw() {}
};

class Bureaucrat {
    private:
        const std::string _name;
        short _grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string& name, short grade);
        Bureaucrat(const Bureaucrat& bureaucrat);
        Bureaucrat operator= (const Bureaucrat& copy);
        ~Bureaucrat();
};

# endif // BUREAUCRAT_HPP