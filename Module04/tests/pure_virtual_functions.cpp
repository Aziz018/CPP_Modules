/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pure_virtual_functions.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 10:09:47 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/24 10:42:39 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

class Shape {
    public:
        virtual void draw() = 0;
        // { // delete the virtual keyword
            // std::cout << "Drawing a shape." << std::endl;
        // }
        virtual ~Shape() {}
};

class Rectangle : public Shape {
    public:
        void draw() {
            std::cout << "Drawing a Rectangle." << std::endl;
        }
};

class Circle : public Shape {
    public:
        void draw() {
            std::cout << "Drawing a Circle." << std::endl;
        }
};

int main() {
    // Shape* shape1 = new Shape();
    Shape* shape2 = new Rectangle();
    Shape* shape3 = new Circle();

    // shape1->draw();
    shape2->draw();
    shape3->draw();    
    
    // delete shape1;
    delete shape2;
    delete shape3;

    return 0;    
}
