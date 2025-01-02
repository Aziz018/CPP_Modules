/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:59:15 by aelkheta          #+#    #+#             */
/*   Updated: 2025/01/02 16:14:14 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {
    private:
        const std::string _name;
        short _grade;
    public:
        /* ********** Orthodox Canonical Form ********** */
        Bureaucrat();
        Bureaucrat(const Bureaucrat& bureaucrat);
        Bureaucrat& operator= (const Bureaucrat& copy);
        ~Bureaucrat();
        /* ********************************************* */

        Bureaucrat(const std::string& name, short grade);
        void IncrementGrade();
        void DecrementGrade();
        std::string getName() const;
        short getGrade() const;

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
};

std::ostream& operator<< (std::ostream& os, const Bureaucrat& bureaucrat);

# endif // BUREAUCRAT_HPP