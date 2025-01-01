/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeExceptions.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta1337@student.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 17:06:48 by aelkheta              #+#    #+#             */
/*   Updated: 2025/01/01 17:07:36 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef GRADE_EXCEPTIONS_HPP
# define GRADE_EXCEPTIONS_HPP

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

# endif // GRADE_EXCEPTIONS_HPP