/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 20:24:32 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/17 13:20:15 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Animal.hpp>
# include <Cat.hpp>
# include <Dog.hpp>
# include <WrongAnimal.hpp>

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << std::endl;

    const WrongAnimal* wrong = new WrongCat();
    std::cout << wrong->getType() << std::endl;
    wrong->makeSound();
    delete wrong;

    std::cout << std::endl;

    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;

    std::cout << std::endl;

    i->makeSound(); // will output the cat sound!
    j->makeSound(); // will output the dog sound!
    meta->makeSound();
    
    delete meta;
    delete i;
    delete j;

    return 0;
}
