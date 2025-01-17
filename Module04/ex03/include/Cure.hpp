/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta < aelkheta@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 09:24:42 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/29 13:45:39 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CURE_HPP
# define CURE_HPP

# include <ICharacter.hpp>
# include <AMateria.hpp>

class Cure : public AMateria {
    public:
        Cure();
        Cure(const Cure& cure);
        Cure operator= (const Cure& copy);
        virtual void use(ICharacter& target);
        Cure( std::string const& type);
        AMateria* clone() const;
        ~Cure();
};

# endif // CURE_HPP
