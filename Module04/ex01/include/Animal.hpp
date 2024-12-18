/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 08:51:09 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/17 14:44:18 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal( const Animal& animal );
        Animal& operator= ( const Animal& copy );
        virtual ~Animal();
        const  std::string& getType() const;
        virtual void makeSound() const;
};

# endif // ANIMAL_HPP