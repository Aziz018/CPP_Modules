/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:26:03 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/13 17:08:09 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main() {
    ClapTrap claptrap1("Hassan");

    claptrap1.attack("Hamid");
    claptrap1.takeDamage(5);
    claptrap1.beRepaired(3);

    ClapTrap claptrap2("Aziz");
    claptrap2.attack("Omar");
    claptrap2.takeDamage(10);
    claptrap2.beRepaired(10);
    claptrap2.beRepaired(10);
    claptrap2.beRepaired(10);
    claptrap2.beRepaired(10);
    claptrap2.beRepaired(10);
    claptrap2.beRepaired(10);
    claptrap2.beRepaired(10);
    claptrap2.beRepaired(10);
    claptrap2.beRepaired(10);
    claptrap2.beRepaired(10);

    return 0;
}
