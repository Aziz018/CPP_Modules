/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:59:15 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/26 17:05:15 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
    private:
        std::string name;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat& bureaucrat);
        Bureaucrat operator= (const Bureaucrat& copy);
        ~Bureaucrat();
};

Bureaucrat::Bureaucrat() {
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat) {

}

Bureaucrat Bureaucrat::operator= (const Bureaucrat& copy) {

}

Bureaucrat::~Bureaucrat() {

}


# endif // BUREAUCRAT_HPP