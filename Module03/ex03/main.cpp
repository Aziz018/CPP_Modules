/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:26:03 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/14 17:26:12 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"

int main() {
    ScavTrap scavtrap1("aziz");
    scavtrap1.attack("hamid");
    
    ScavTrap scavtrap(scavtrap1);

    FragTrap fragtrap1("omar");
    fragtrap1.attack("aziz");    

    return 0;
}
