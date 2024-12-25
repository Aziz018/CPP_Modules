/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 09:24:10 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/25 13:42:08 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
class AMateria;

class ICharacter {
    public:
        virtual std::string const & getName() const = 0; // pure vitual func have no body
        virtual void equip(AMateria* m) = 0; // 
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0; // pure vitual func have no body
        virtual ~ICharacter(); // destructor
};

# endif // ICHARACTER_HPP
