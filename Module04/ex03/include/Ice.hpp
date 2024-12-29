/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta < aelkheta@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 09:24:28 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/29 13:34:30 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ICE_HPP
# define ICE_HPP

# include <ICharacter.hpp>
# include <AMateria.hpp>

class Ice : public AMateria {
    public:
        Ice();
        Ice(const Ice& ice);
        Ice operator= (const Ice& copy);
        void use(ICharacter& target);
        Ice( std::string const& type);
        AMateria* clone() const;
        ~Ice();
};

# endif // ICE_HPP
