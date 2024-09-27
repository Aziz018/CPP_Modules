/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 09:13:03 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/27 21:06:30 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

const int Fixed::FractionalBits = 8;

Fixed::Fixed() : FixedPoint( 0 ) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& fixed ) {
    std::cout << "Copy constructor called" << std::endl;
    // this->FixedPoint = fixed.getRawBits();
    FixedPoint = fixed.FixedPoint;
}

Fixed& Fixed::operator= ( const Fixed& copy ) {
    std::cout << "Copy assignment operator called" << std::endl;
    if ( this != &copy ) {
        // this->FixedPoint = copy.getRawBits();
        this->FixedPoint = copy.FixedPoint;
    }
    return *this;
}

// std::ostream& operator<< ( std::ostream& os, const Fixed& fixed ) {
//     std::cout << fixed.toFloat() << std::endl;
//     return os;
// }

Fixed::Fixed( const int& fixed ) {
    std::cout << "Int constructor called" << std::endl;
    FixedPoint = fixed * (1 << this->FractionalBits);
}

Fixed::Fixed( const float& fixed ) {
    std::cout << "Float constructor called" << std::endl;
    FixedPoint = fixed * (1 << this->FractionalBits);
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl; 
    return FixedPoint;
}

void Fixed::setRawBits( int const raw ) {
    FixedPoint = raw;
}

float Fixed::toFloat( void ) const {
    return this->FixedPoint / (1 << this->FractionalBits);
}

int Fixed::toInt( void ) const {
    return this->FixedPoint * (1 << this->FractionalBits);
}
