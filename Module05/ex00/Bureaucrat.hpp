/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta1337@student.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:59:15 by aelkheta          #+#    #+#             */
/*   Updated: 2025/01/01 17:19:27 by aelkheta         ###   ########.fr       */
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
        // Orthodox Canonical Form
        Bureaucrat();
        Bureaucrat(const Bureaucrat& bureaucrat);
        Bureaucrat& operator= (const Bureaucrat& copy);
        ~Bureaucrat();

        Bureaucrat(const std::string& name, short grade);
        std::string getName();
        short getGrade();
};

# endif // BUREAUCRAT_HPP