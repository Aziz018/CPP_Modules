/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:19:49 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/21 20:45:25 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"

class HumanB {
private:
    std::string name;
    Weapon* weapon;
    
public:
    HumanB(std::string name);
    ~HumanB();
    
    void attack(void);
    void setWeapon(Weapon& weapon);
};

# endif // HUMAN_B_HPP