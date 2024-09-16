/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 01:54:52 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/16 04:40:34 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAP_TRAP_CPP
# define CLAP_TRAP_CPP

# include <iostream>

class ClapTrap {
private:
    std::string Name;
    unsigned int HitPoints;
    unsigned int EnergyPoints;
    unsigned int AttackDamage;
public:
    ClapTrap( const std::string& name );
    ClapTrap( const ClapTrap &claptrap );
    ClapTrap& operator= ( const ClapTrap& copy );
    ~ClapTrap();

    const std::string& getName() const;
    const unsigned int& getHitPoints() const;
    const unsigned int& getEnergyPoints() const;
    const unsigned int& getAttackDamage() const;

    void attack( const std::string& target );
    void takeDamage( unsigned int amount );
    void beRepaired( unsigned int amount );
};

# endif // CLAP_TRAP_CPP
