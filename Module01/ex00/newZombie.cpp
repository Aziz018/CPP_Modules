/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:08:56 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/02 07:35:18 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

/// @brief Create and allocate for the new zombie object. 
Zombie* newZombie( std::string name ) {

    // Zombie* zombie = new Zombie(name);
    // zombie->setName(name);
    // return (zombie);
    return (new Zombie(name));
}