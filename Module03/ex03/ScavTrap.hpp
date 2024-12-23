/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:10:31 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/22 20:05:36 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap( const std::string& name );
        ScavTrap( const ScavTrap& scavtrap );
        ScavTrap& operator= (const ScavTrap& copy);
        void attack(const std::string& target);
        ~ScavTrap();
        void guardGate();
};

# endif // SCAVTRAP_H