/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inheritance.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 23:01:12 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/19 01:23:40 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

class Animal {
public:
    Animal() { std::cout << "Animal want to start" << std::endl; }

    void eat() { std::cout << "Animal is eating" << std::endl; }
};

class Bird : public Animal {
public:
    std::string Type;
    Bird() : Type( "" ) { std::cout << "Bird start fly" << std::endl; }
    ~Bird() { std::cout << "Bird is dead" << std::endl; }
    void getType() {
        std::cout << Type << std::endl;
    }
};

/// @brief multiple inheritance
class Mohamed : public Bird {
public:
    std::string Name;
    Mohamed () { std::cout << "Mohamed start fly" << std::endl; }    
};

class Aziz : public Animal, public Bird {
        
};

int main() {
    Mohamed mo{};

    return 0;
}