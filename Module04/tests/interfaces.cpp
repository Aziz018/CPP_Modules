/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interfaces.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 10:10:12 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/26 19:47:25 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// Drawable Interface (Abstract Class)
class Drawable {
public:
    virtual void draw() const = 0;  // Pure virtual function: Must be implemented by derived classes
    virtual ~Drawable() {} // Virtual destructor for polymorphism
};

// Concrete Classes Implementing the Drawable interface
class Circle : public Drawable {
public:
    void draw() const {
        std::cout << "Drawing a circle." << std::endl;
    }
};

class Square : public Drawable {
public:
    void draw() const {
        std::cout << "Drawing a square." << std::endl;
    }
};

class Triangle : public Drawable{
public:
    void draw() const{
        std::cout << "Drawing a triangle." << std::endl;
    }
};

void drawShape(const Drawable& shape) {
    shape.draw(); // Polymorphic call to draw()
}

int main() {
    Circle circle;
    Square square;
    Triangle triangle;


    drawShape(circle);   // Output: Drawing a circle.
    drawShape(square);   // Output: Drawing a square.
    drawShape(triangle); // Output: Drawing a triangle.

    return 0;
}