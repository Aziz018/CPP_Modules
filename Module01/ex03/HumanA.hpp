/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:19:44 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/02 23:20:31 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"

class HumanA {
private:
    std::string name;
    Weapon& weapon;
    
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    
    void attack(void);
};

# endif // HUMAN_A_HPP