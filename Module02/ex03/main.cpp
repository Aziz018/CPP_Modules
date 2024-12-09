/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 08:42:03 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/09 13:00:27 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// # include "Fixed.hpp"
# include "Point.hpp"

void printIsInOut(bool isIn) {
    if (isIn) {
        std::cout << "Point is inside the triangle" << std::endl;
    } else {
        std::cout << "Point is outside the triangle" << std::endl;
    }
}

int main( void ) {
    // Fixed a;
    // Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    // std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    
    // std::cout << b << std::endl;
    
    // std::cout << Fixed::max( a, b ) << std::endl;

    Point a(0, 0);
    Point b(5, 0);
    Point c(0, 5);

    Point p1(-1, 1);    // outside.
    printIsInOut(bsp(a, b, c, p1));
    
    Point p2(1, 0);     // inside
    printIsInOut(bsp(a, b, c, p2));

    Point p3(5, 0);     // inside
    printIsInOut(bsp(a, b, c, p3));

    Point p4(5, 1);     // outside.
    printIsInOut(bsp(a, b, c, p4));
    return 0;
}