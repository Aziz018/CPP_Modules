/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 18:25:28 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/08 12:37:22 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef AForm_HPP
# define AForm_HPP

# include <iostream>

class Bureaucrat;

class AForm {
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeRequiredToSign;
        const int _gradeRequiredToExec;
    public:
        AForm();
        AForm( const AForm& form);
        AForm& operator= (const AForm& copy);
        virtual ~AForm();

        AForm( const std::string& name, int gradeToSign, int gradeToExec);
        const std::string& getName() const;
        const bool& getIsSigned() const;
        const int& getGradeToSign() const;
        const int& getGradeToExec() const;

        void beSigned(Bureaucrat& bureaucrat);

        virtual void execute(Bureaucrat const &executor) const = 0;

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

        class FormNotSigned : public std::exception {
            private:
                std::string _message;
            public:
                FormNotSigned(const std::string message) : _message(message) {}
                const char* what() throw() {
                    return _message.c_str();
                }
                ~FormNotSigned() throw() {}
        };
};

std::ostream& operator<< (const std::ostream& os, const AForm& AForm);

# endif // AForm_HPP
