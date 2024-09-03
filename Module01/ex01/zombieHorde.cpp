/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:19:33 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/02 21:45:01 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
    
    Zombie* horde = new Zombie[N];

    for (int i = 0; i < N; ++i) {
        horde[i].setName(name);
    }
    return (horde);
}