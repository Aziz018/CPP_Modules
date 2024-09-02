/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:33:03 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/02 02:53:02 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
private:
    std::string name;

public:

    // Zombie () : name (0) {}
    
    Zombie (std::string& name);
    
    ~Zombie();
    
    // void setName( std::string& name ) {
    //     this->name = name;
    // }

    void announce( void );
};


void randomChump( std::string name );
Zombie* newZombie( std::string name );


# endif //ZOMBIE_HPP
