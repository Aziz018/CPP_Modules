/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:08:58 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/02 07:33:45 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

/// @brief Creates a zombie, name it, and the zombie announces itself.
/// @param name Name of the zombie.
void randomChump( std::string name ) {
    Zombie tmpZombie(name);
    tmpZombie.announce();
}
