/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 20:24:32 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/17 11:48:23 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Animal.hpp>
# include <Cat.hpp>
# include <Dog.hpp>
# include <WrongAnimal.hpp>

int main()
{
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    const WrongAnimal* i = new WrongCat(); 

    // std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;
    i->makeSound(); // will output the cat sound!
    // j->makeSound(); // will output the dog sound!
    // meta->makeSound();
    
    delete i;
    // delete j;
    // delete meta;

    return 0;
}
