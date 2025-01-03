
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 20:24:32 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/17 11:05:31 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <Animal.hpp>
#include <Brain.hpp>

class Dog : public Animal {
    private:
        Brain *brain;
    public:
        Dog();
        Dog(const Dog &dog);
        Dog &operator=(const Dog &copy);
        ~Dog();
        void makeSound() const;
};

#endif