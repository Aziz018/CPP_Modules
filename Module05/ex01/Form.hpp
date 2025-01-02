/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 14:43:41 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/02 18:04:01 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <stdbool.h>

class Bureaucrat;

class Form {
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeRequiredToSign;
        const int _gradeRequiredToExec;
    public:
        Form();
        Form( const Form& form);
        Form& operator= (const Form& copy);
        ~Form();

        Form( const std::string& name, int gradeToSign, int gradeToExec);
        const std::string& getName() const;
        const bool& getIsSigned() const;
        const int& getGradeToSign() const;
        const int& getGradeToExec() const;

        void beSigned(Bureaucrat& bureaucrat);

        class GradeTooHighException : public std::exception {
            private:
                std::string _message;
            public:
                GradeTooHighException(const std::string message) :_message(message) {}
                const char* what() const throw() {
                    return _message.c_str();
                }
                ~GradeTooHighException() throw() {}
        };

        class GradeTooLowException : public std::exception {
            private:
                std::string _message;
            public:
                GradeTooLowException(const std::string message) :_message(message) {}
                const char* what() const throw() {
                    return _message.c_str();
                }
                ~GradeTooLowException() throw() {}
        };
};

std::ostream& operator<< (const std::ostream& os, const Form& form);

# endif // FORM_HPP