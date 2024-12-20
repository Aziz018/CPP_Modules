/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 17:25:50 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/20 18:57:27 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap( const DiamondTrap& diamondtrap );
        DiamondTrap( const std::string& name );
        void attack(const std::string& target);
        ~DiamondTrap();
        void whoAmI();
};

# endif // DIAMONDTRAP_HPP
