/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:26:01 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/14 08:12:52 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

class ClapTrap {
    protected:
        std::string Name;   // represent the name of the ClapaTrap.
        size_t HitPoints;      // represent the health of the ClapTrap.
        size_t EnergyPoints;   // represent the energie of the ClapTrap.
        size_t AttackDamage;
    public:
        ClapTrap();
        ClapTrap(const std::string& name);
        ClapTrap(const ClapTrap& claptrap);
        ClapTrap& operator= (const ClapTrap& copy);
        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};
