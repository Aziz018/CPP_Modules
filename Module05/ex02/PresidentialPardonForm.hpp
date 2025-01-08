/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 18:25:46 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/08 18:19:18 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <AForm.hpp>

class PresidentialPardonForm : public AForm {
    private:
        std::string _target;
    public:
        /* ********** Orthodox Canonical Form ********** */
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm& presidentialPardonForm);
        PresidentialPardonForm& operator= (const PresidentialPardonForm& copy);
        ~PresidentialPardonForm();
        /* ********************************************* */

        PresidentialPardonForm(const std::string& target);
        void execute(Bureaucrat const &executor) const;
};
