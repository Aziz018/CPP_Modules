/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 01:54:58 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/16 04:47:29 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main() {

    ClapTrap ct("aziz");
    ct.attack("mohamed");
    ct.takeDamage(10);

    ct.beRepaired(2);

    return 0;
}