/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   composition.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:05:44 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/16 23:17:44 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

// 1. What is Object Composition?

class Engine {
public:
    void start() {
        std::cout << "Engine started." << std::endl;
    }
};

class Wheel {
public:
    void rotate() {
        std::cout << "Wheels are rotating." << std::endl;
    }
};

class Car {
private:
    Engine engine;
    Wheel wheel;
public:
    void drive() {
        engine.start();
        wheel.rotate();
        std::cout << "Car is driving." << std::endl;
    }
};

int main() {
    Car car;
    
    car.drive();
}