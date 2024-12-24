/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   virtual_functions.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 10:09:35 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/24 10:58:19 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

// example 1:

// class Shape {
//     public:
//         virtual void draw() { // delete the virtual keyword
//             std::cout << "Drawing a shape." << std::endl;
//         }
//         virtual ~Shape() {}
// };

// class Rectangle : public Shape {
//     public:
//         void draw() {
//             std::cout << "Drawing a Rectangle." << std::endl;
//         }
// };

// class Circle : public Shape {
//     public:
//         void draw() {
//             std::cout << "Drawing a Circle." << std::endl;
//         }
// };

// int main() {
//     Shape* shape1 = new Shape();
//     Shape* shape2 = new Rectangle();
//     Shape* shape3 = new Circle();

//     shape1->draw();
//     shape2->draw();
//     shape3->draw();    
    
//     delete shape1;
//     delete shape2;
//     delete shape3;

//     return 0;    
// }

// example 2:

class Base {
    public:
        std::string getName() { // virtual keyword
            return "Base";
        }
};

class Derived : public Base {
    public:
        std::string getName() {
            return "Derived";
        }
};

int main() {
    Derived derived;
    Base& r_derived = derived;
    Base* p_derived = &derived;

    std::cout << derived.getName() << std::endl;
    std::cout << r_derived.getName() << std::endl;
    std::cout << p_derived->getName() << std::endl;
    
    return 0;
}

// example 3

// #include <iostream>
// #include <string_view>
// #include <string>

// class Animal
// {
// protected:
//     std::string m_name;

//     // We're making this constructor protected because
//     // we don't want people creating Animal objects directly,
//     // but we still want derived classes to be able to use it.
//     Animal(std::string_view name)
//         : m_name{ name }
//     {
//     }

//     // To prevent slicing (covered later)
//     Animal(const Animal&) = delete;
//     Animal& operator=(const Animal&) = delete;

// public:
//     std::string_view getName() const { return m_name; }
//     std::string_view speak() const { return "???"; }
// };

// class Cat: public Animal
// {
// public:
//     Cat(std::string_view name)
//         : Animal{ name }
//     {
//     }

//     std::string_view speak() const { return "Meow"; }
// };

// class Dog: public Animal
// {
// public:
//     Dog(std::string_view name)
//         : Animal{ name }
//     {
//     }

//     std::string_view speak() const { return "Woof"; }
// };

// int main()
// {
//     const Cat cat{ "Fred" };
//     std::cout << "cat is named " << cat.getName() << ", and it says " << cat.speak() << '\n';

//     const Dog dog{ "Garbo" };
//     std::cout << "dog is named " << dog.getName() << ", and it says " << dog.speak() << '\n';

//     const Animal* pAnimal{ &cat };
//     std::cout << "pAnimal is named " << pAnimal->getName() << ", and it says " << pAnimal->speak() << '\n';

//     pAnimal = &dog;
//     std::cout << "pAnimal is named " << pAnimal->getName() << ", and it says " << pAnimal->speak() << '\n';

//     return 0;
// }