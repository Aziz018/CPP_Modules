/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   abstract_classed.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 10:10:02 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/26 19:46:41 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

// Abstract Base Class: Animal
class Animal {
public:
    // Pure virtual function: All animals must have a way to make a sound
    virtual void makeSound() const = 0;

    // Virtual function with implementation: All animals can be described
    virtual std::string getDescription() const {
       return "This is an unknown animal.";
    }
    
    // Pure Virtual Destructor: For proper cleanup in case of polymorphism
    virtual ~Animal() {}
};

// Concrete Derived Class: Dog
class Dog : public Animal {
private:
    std::string breed;

public:
    Dog(const std::string& b) : breed(b) {}

    void makeSound() const {
        std::cout << "Woof!" << std::endl;
    }

    std::string getDescription() const {
        return "This is a dog of breed: " + breed;
    }
};


// Concrete Derived Class: Cat
class Cat : public Animal {
public:
    void makeSound() const {
        std::cout << "Meow!" << std::endl;
    }

    std::string getDescription() const {
        return "This is a cat.";
    }
};

// Concrete Derived Class: Bird
class Bird : public Animal {
public:
    void makeSound() const {
        std::cout << "Chirp!" << std::endl;
    }
};

// Helper function that uses polymorphism through the Animal abstract class.
void animalSound(const Animal& animal) {
    animal.makeSound();
}


void printAnimalDescription(const Animal& animal) {
    std::cout << animal.getDescription() << std::endl;
}

int main() {
    // Animal animal; // Error! Cannot create an object of the abstract class

    Dog dog("Labrador");
    Cat cat;
    Bird bird;

    animalSound(dog); // Output: Woof!
    animalSound(cat); // Output: Meow!
    animalSound(bird); // Output: Chirp!

    printAnimalDescription(dog); // Output: This is a dog of breed: Labrador
    printAnimalDescription(cat); // Output: This is a cat.
    printAnimalDescription(bird); // Output: This is an unknown animal.

    // Example with dynamic allocation of memory:
    Animal* ptr = new Dog("Poodle");
    animalSound(*ptr); // Woof
    printAnimalDescription(*ptr); //Output: This is a dog of breed: Poodle
    delete ptr;

    return 0;
}