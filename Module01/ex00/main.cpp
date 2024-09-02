/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:32:56 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/02 07:35:30 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

/// @brief Main function for tests.
int main() {
    Zombie* zooombie = newZombie("aziz");
    zooombie->announce();
    
    std::cout << "----------------------------------" << std::endl;
    
    randomChump("Foo");
    
    delete zooombie;
}
