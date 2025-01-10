/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 20:40:35 by aelkheta          #+#    #+#             */
/*   Updated: 2025/01/10 20:53:48 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <AForm.hpp>

class Intern
{
private:
    
public:
    Intern();
    Intern(const Intern& intern);
    Intern& operator= (const Intern& copy);
    ~Intern();
    AForm* makeForm(const std::string& formName, const std::string& formTarget);
};

Intern::Intern(/* args */)
{
}

Intern::Intern(const Intern& intern) {
}

Intern& Intern::operator= (const Intern& copy) {
}

AForm* Intern::makeForm(const std::string& formName, const std::string& formTarget) {
    
}

Intern::~Intern()
{
}
