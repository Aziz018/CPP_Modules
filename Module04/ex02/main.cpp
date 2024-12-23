/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 20:24:32 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/23 10:00:53 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Animal.hpp>
# include <Dog.hpp>
# include <Cat.hpp>

# define ARRAY_SIZE 10

int main()
{
    Animal* animals[ARRAY_SIZE];
    
    for (int i = 0; i < ARRAY_SIZE / 2; i++) {
        animals[i] = new Dog();
        std::cout << std::endl;
    }
    for (int i = ARRAY_SIZE / 2; i < ARRAY_SIZE; i++) {
        animals[i] = new Cat();
        std::cout << std::endl;
    }

    for (int i = 0; i < ARRAY_SIZE; i++) {
        delete animals[i];
        std::cout << std::endl;
    }

    std::cout << std::endl;
    
    const Animal* i = new Cat();
    const Animal* j = new Dog();

    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;

    std::cout << std::endl;

    i->makeSound(); // will output the cat sound!
    j->makeSound(); // will output the dog sound!
    
    std::cout << std::endl;

    delete i;
    delete j;

    return 0;
}
