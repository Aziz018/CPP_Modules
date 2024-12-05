/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:32:56 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/04 13:13:08 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

/// @brief Main function for tests.
int main() {
    Zombie* zooombie = newZombie("aziz");
    if (!zooombie)
        return 1;
    zooombie->announce();    
    randomChump("Foo");
    
    delete zooombie;
}
