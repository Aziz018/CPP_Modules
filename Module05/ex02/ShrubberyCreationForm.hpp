/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 18:25:53 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/08 18:24:30 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <AForm.hpp>

class ShrubberyCreationForm : public AForm {
    private:
        std::string _target;
    public:
        /* ********** Orthodox Canonical Form ********** */
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& shrubberyCreationForm);
        ShrubberyCreationForm& operator= (const ShrubberyCreationForm& copy);
        ~ShrubberyCreationForm();
        /* ********************************************* */

        ShrubberyCreationForm(const std::string& target);
        void execute(Bureaucrat const &executor) const;
};
