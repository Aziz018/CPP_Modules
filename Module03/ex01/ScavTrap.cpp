/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:10:28 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/14 08:13:34 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
}

ScavTrap::ScavTrap( const ScavTrap& scavtrap ) {
    this->Name = scavtrap.Name;
}

ScavTrap& ScavTrap::operator= (const ScavTrap& copy) {
    
}

ScavTrap::~ScavTrap() {
    
}
