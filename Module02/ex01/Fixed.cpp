/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 08:18:17 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/08 10:18:42 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

const int Fixed::FractionalBits = 8;

Fixed::Fixed() : FixedPoint(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& fixed ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
    // this->FixedPoint = fixed.getRawBits();
}

Fixed::Fixed( const int fixed ) {
    std::cout << "Int constructor called" << std::endl;
    this->FixedPoint = fixed * (1 << this->FractionalBits);
    // this->FixedPoint = fixedVlaue * 256; //(1 << this->FractionalBits);
}

Fixed::Fixed( const float fixed ) {
    std::cout << "float constructor called" << std::endl;
    this->FixedPoint = roundf(fixed * (1 << this->FractionalBits));
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->FixedPoint;
}

void Fixed::setRawBits( int const raw ) {
    this->FixedPoint = raw;
}

Fixed& Fixed::operator= ( const Fixed& fixedCopy ) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixedCopy) {
        this->FixedPoint = fixedCopy.getRawBits();
    }
    return *this;
}

std::ostream& operator<< ( std::ostream& os, const Fixed& fixed ) {
    os << fixed.toFloat();
    return os;
}

float Fixed::toFloat( void ) const {
    return (float)this->FixedPoint / (1 << this->FractionalBits);
}

int Fixed::toInt( void ) const {
    return this->FixedPoint / (1 << this->FractionalBits);
}
