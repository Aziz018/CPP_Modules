/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 08:51:09 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/23 06:39:25 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
    protected:
        std::string type;
    public:
        Animal();                                   // default constructor.
        Animal( const Animal& animal );             // copy constructor.
        Animal& operator= ( const Animal& copy );   // copy assignment op.
        const std::string& getType() const;         // getter for the 'type' attribute.
        virtual ~Animal();                          // destructor.
        virtual void makeSound() const;             // makeSound method.
};

# endif // ANIMAL_HPP