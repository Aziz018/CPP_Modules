/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 09:24:28 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/25 13:20:02 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ICE_HPP
# define ICE_HPP

# include <ICharacter.hpp>
# include <AMateria.hpp>

class Ice : public AMateria {
    public:
        Ice();
        void use(ICharacter& target); // i don't fucking know, i think it attack a target??
        Ice( std::string const& type);
        AMateria* clone() const;
        ~Ice();
};

# endif // ICE_HPP
