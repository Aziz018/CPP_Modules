/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 09:24:55 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/25 14:21:36 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <ICharacter.hpp>
# include <AMateria.hpp>

class Character : public ICharacter {
    private:
        std::string _name;
        AMateria *_saved[4];
        AMateria *_slotes[4];
    public:
        Character();
        Character(const std::string& name);
        Character operator= (const Character& copy);
        Character(const Character& character);
        
        std::string const& getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        ~Character(); // destructor
};

# endif // CHARACTER_HPP
