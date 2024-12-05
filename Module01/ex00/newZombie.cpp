/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:08:56 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/04 13:10:48 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

/// @brief Create and allocate for the new zombie object. 
Zombie* newZombie( std::string name ) {

    // Zombie* zombie = new Zombie(name);
    // zombie->setName(name);
    // return (zombie);
    return (new (std::nothrow) Zombie(name));
}
