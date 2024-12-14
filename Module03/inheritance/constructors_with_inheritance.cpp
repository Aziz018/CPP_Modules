/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructors_with_inheritance.cpp                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:02:18 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/14 13:59:20 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

class MenuItem {
    public:
        std::string name;
        
        // MenuItem() {
        //     name = "unknown";
        //     std::cout << "Base class default constructor" << std::endl;
        // }
        
        MenuItem( const std::string& name_ ) {
            name = name_;
            std::cout << "Base class param constructor" << std::endl;
        }
        
        ~MenuItem() {
            std::cout << "Base class destructor" << std::endl;
        }
};

class Drink : public MenuItem {
    public:
        double ounces;
        
        using MenuItem::MenuItem; // it'll inherite all constucors -std=c++11

        Drink() : MenuItem("unknown") {
            ounces = 8;    
            std::cout << "Derived class default constructor" << std::endl;
        }
        
        Drink( double set_ounces) : MenuItem("n/a") { // not available
            ounces = set_ounces;
            std::cout << "Derived class param constructor" << std::endl;
        }
        
        ~Drink() {
            std::cout << "Derived class destructor" << std::endl;
        }
};


int main () {
    // MenuItem hot_chocolate;
    
    // Drink hot_chocolate; // if there is no default constructor in the base class we'll have an error.
    // Drink moroccan_tea(10);
    Drink coffe("espresso");

    return 0;
}