/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:19:30 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/02 22:05:33 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>


class Zombie {
private:
    std::string name;

public:

    Zombie () : name ("") {}
    Zombie ( std::string& name );
    
    ~Zombie();
    
    void setName( std::string& name );
    std::string getName( void );
    
    void announce( void );
};

Zombie* zombieHorde( int N, std::string name );


# endif // ZOMBIE_HPP
