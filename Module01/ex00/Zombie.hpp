/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:33:03 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/02 22:04:04 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
private:
    std::string name;

public:

    
    Zombie () : name ("") {}
    Zombie (std::string& name);
    
    ~Zombie();
    
    void setName( std::string& name );
    std::string getName( void );

    void announce( void );
};


void randomChump( std::string name );
Zombie* newZombie( std::string name );


# endif //ZOMBIE_HPP
