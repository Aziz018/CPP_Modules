/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 01:54:58 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/19 22:22:28 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

int main() {

    ClapTrap ct("aziz");
    ct.attack("mohamed");
    ct.takeDamage(5);
    
    ct.beRepaired(2);
    ct.beRepaired(2);
    ct.beRepaired(2);

    // std::cout << "Energie points " << ct.getEnergyPoints() << std::endl;
    
    ScavTrap st("scav");
    st.attack("mohamed");
    st.beRepaired(3);
    st.takeDamage(10);
    st.guardGate();

    return 0;
}