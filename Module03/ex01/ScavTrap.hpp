/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 05:31:04 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/17 23:29:47 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
private:
    
public:
    ScavTrap( const std::string& name );
    ~ScavTrap();

    void attack( const std::string& target );
    void guardGate();
};
