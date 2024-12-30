/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta < aelkheta@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 09:18:44 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/29 13:34:13 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <ICharacter.hpp>

class AMateria {
    protected:
        std::string type; // type of the AMateria
    public:
        AMateria();                             // default constructor of AMateria
        AMateria(std::string const &type);      // param constructor of AMateria
        AMateria(const AMateria &amateria);
        AMateria& operator= (const AMateria & copy);
        std::string const & getType() const;    //Returns the materia type
        virtual AMateria* clone() const = 0;    // pure vitual func have no body
        virtual void use(ICharacter& target) = 0;
        virtual ~AMateria();
};

# endif // AMATERIA_HPP
