/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 18:25:20 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/08 12:39:10 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <AForm.hpp>

AForm::AForm() : _name(""),
        _isSigned(false),
        _gradeRequiredToSign(1),
        _gradeRequiredToExec(1) {
    std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm( const AForm& form) : _name(form._name),
        _isSigned(form._isSigned),
        _gradeRequiredToSign(form._gradeRequiredToSign),
        _gradeRequiredToExec(form._gradeRequiredToExec) {
    std::cout << "AForm copy constructor called" << std::endl;
}

AForm& AForm::operator= (const AForm& copy) {
    if (this != &copy) {
        this->_isSigned = copy._isSigned;
    }
    return *this;
}

AForm::~AForm() {
    std::cout << "From destructor called" << std::endl;
}

AForm::AForm( const std::string& name, int gradeToSign, int gradeToExec) : _name(name),
        _isSigned(false),
        _gradeRequiredToSign(gradeToSign),
        _gradeRequiredToExec(gradeToExec) {
    std::cout << "From param constructor called" << std::endl;
    if (gradeToSign < 1 || gradeToExec < 1) {
        throw AForm::GradeTooHighException("Grade Sign Too High");
    }
    if (gradeToSign > 150 || gradeToExec > 150) {
        throw AForm::GradeTooLowException("Grade Sign Too Low");
    }
}

const std::string& AForm::getName() const {
    return _name;
}

const bool& AForm::getIsSigned() const {
    return _isSigned;
}

const int& AForm::getGradeToSign() const {
    return _gradeRequiredToSign;
}

const int& AForm::getGradeToExec() const {
    return _gradeRequiredToExec;
}

std::ostream& operator<<(std::ostream& os, const AForm& form) {
    os << "Form Name: " << form.getName() << ", Signed: " << form.getIsSigned()
       << ", Grade to Sign: " << form.getGradeToSign()
       << ", Grade to Execute: " << form.getGradeToExec();
    return os;
}
