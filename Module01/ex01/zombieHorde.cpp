/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:19:33 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/04 13:17:28 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
    
    Zombie* horde = new (std::nothrow) Zombie[N];
    if (!horde) {
        std::cerr << "Can't allocate memory for Zombie\n";
        return NULL;
    }

    for (int i = 0; i < N; ++i) {
        horde[i].setName(name);
    }
    return horde;
}
