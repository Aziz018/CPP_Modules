/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 09:43:55 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/14 18:34:35 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    private:
    public:
        FragTrap();
        FragTrap( const std::string& name );
        FragTrap( const FragTrap& fragtrap );
        FragTrap& operator= ( const FragTrap& copy );
        ~FragTrap();
        void highFivesGuys(void);
};

# endif // FRAGTRAP_H