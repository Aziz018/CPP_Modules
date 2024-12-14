/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:10:31 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/13 17:15:20 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
        
public:
    ScavTrap();
    ScavTrap( const ScavTrap& scavtrap );
    ScavTrap& operator= (const ScavTrap& copy);
    ~ScavTrap();
};
