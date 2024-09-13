/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 21:45:41 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/03 21:45:42 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

const int Fixed::FractionalBits = 8;

Fixed::Fixed() : FixedPoint(0) {
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed& fixed) : FixedPoint(fixed.FixedPoint) {
    std::cout << "Copy constructor called" << std::endl;
}
Fixed& Fixed::operator= (const Fixed& copy) {
    if (this != &copy) {
        this->FixedPoint = copy.FixedPoint;
    }
    std::cout << "Copy assignment operator called // <-- This line may be missing depending on your implementation" << std::endl;
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called " << std::endl;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl; 
    return FixedPoint;
}
void Fixed::setRawBits( int const raw ) {
    FixedPoint = raw;
}