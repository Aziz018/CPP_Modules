/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:26:01 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/14 09:25:16 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap {
    private:
        std::string name;   // represent the name of the ClapaTrap.
        size_t hitPoints;      // represent the health of the ClapTrap.
        size_t energyPoints;   // represent the energie of the ClapTrap.
        size_t attackDamage;
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

# endif // CLAPTRAP_H
