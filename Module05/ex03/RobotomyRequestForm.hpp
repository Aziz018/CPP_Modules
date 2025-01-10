/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 18:25:50 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/08 18:20:02 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <AForm.hpp>

class RobotomyRequestForm : public AForm {
    private:
        std::string _target;
    public:
        /* ********** Orthodox Canonical Form ********** */
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm& robotomyRequestForm);
        RobotomyRequestForm& operator= (const RobotomyRequestForm& copy);
        ~RobotomyRequestForm();
        /* ********************************************* */

        RobotomyRequestForm(const std::string& target);
        void execute(Bureaucrat const &executor) const;
};
