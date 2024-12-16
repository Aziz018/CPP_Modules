/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 08:51:09 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/16 09:23:03 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal( const Animal& animal );
        Animal& operator= ( const Animal& copy );
        ~Animal();
        const  std::string& getType() const;
        virtual void makeSound() const;
};

class Dog : public Animal {
    public:
        Dog();
        Dog( const Dog& dog );
        Dog& operator= ( const Dog& copy );
        ~Dog();

        void makeSound() const;
};

class Cat : public Animal {
    public:
        Cat();
        Cat( const Cat& cat );
        Cat& operator= ( const Cat& copy );
        ~Cat();

        void makeSound() const;
};

# endif // ANIMAL_HPP