/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:20:46 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/02 23:33:52 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon {
private:
    std::string type;

public:

    Weapon(const std::string& newType) : type(newType) {};
    ~Weapon();

    const std::string& getType();
    void setType(const std::string& newType);
};


# endif // WEAPON_HPP