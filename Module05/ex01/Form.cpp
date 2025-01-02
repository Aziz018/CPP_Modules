/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 14:43:39 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/02 18:11:38 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Form.hpp>

Form::Form() : _name(""),
        _isSigned(false),
        _gradeRequiredToSign(1),
        _gradeRequiredToExec(1) {
    std::cout << "Form default constructor called" << std::endl;
}

Form::Form( const Form& form) : _name(form._name),
        _isSigned(form._isSigned),
        _gradeRequiredToSign(form._gradeRequiredToSign),
        _gradeRequiredToExec(form._gradeRequiredToExec) {
    std::cout << "Form copy constructor called" << std::endl;
}

Form& Form::operator= (const Form& copy) {
    if (this != &copy) {
        this->_isSigned = copy._isSigned;
    }
    return *this;
}

Form::~Form() {
    std::cout << "From destructor called" << std::endl;
}

Form::Form( const std::string& name, int gradeToSign, int gradeToExec) : _name(name),
        _isSigned(false),
        _gradeRequiredToSign(gradeToSign),
        _gradeRequiredToExec(gradeToExec) {
    std::cout << "From param constructor called" << std::endl;
    if (gradeToSign < 1 || gradeToExec < 1) {
        throw Form::GradeTooHighException("Grade Sign Too High");
    }
    if (gradeToSign > 150 || gradeToExec > 150) {
        throw Form::GradeTooLowException("Grade Sign Too Low");
    }
}

const std::string& Form::getName() const {
    return _name;
}

const bool& Form::getIsSigned() const {
    return _isSigned;
}

const int& Form::getGradeToSign() const {
    return _gradeRequiredToSign;
}

const int& Form::getGradeToExec() const {
    return _gradeRequiredToExec;
}

// void Form::beSigned(Bureaucrat& bureaucrat) {
//     if (bureaucrat.getGrade() <= this->getGradeToSign()) {
//         this->_isSigned = true;
//     }
//     else {
//         throw Form::GradeTooLowException("Grade Sign Too Low");
//     }
// }

std::ostream& operator<<(std::ostream& os, const Form& form) {
    os << "Form Name: " << form.getName() << ", Signed: " << form.getIsSigned()
       << ", Grade to Sign: " << form.getGradeToSign()
       << ", Grade to Execute: " << form.getGradeToExec();
    return os;
}
