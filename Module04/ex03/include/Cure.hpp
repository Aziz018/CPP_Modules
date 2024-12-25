/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 09:24:42 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/25 10:54:14 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CURE_HPP
# define CURE_HPP

# include <ICharacter.hpp>
# include <AMateria.hpp>

class Cure : public AMateria {
    public:
        Cure();
        virtual void use(ICharacter& target); // i don't fucking know, i think it attack a target??
        Cure( std::string const& type);
        AMateria* clone() const;
        ~Cure();
};

# endif // CURE_HPP
