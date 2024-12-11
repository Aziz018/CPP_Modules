/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 08:18:17 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/10 16:56:27 by aelkheta         ###   ########.fr       */
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

Fixed& Fixed::operator= ( const Fixed& fixedCopy ) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixedCopy) {
        this->FixedPoint = fixedCopy.getRawBits();
    }
    return *this;
}

// Relational operators:
bool Fixed::operator> ( const Fixed& fixed ) {
    return this->FixedPoint > fixed.FixedPoint;
}

bool Fixed::operator< ( const Fixed& fixed ) {
    return this->FixedPoint < fixed.FixedPoint;
}

bool Fixed::operator>= ( const Fixed& fixed ) {
    return this->FixedPoint >= fixed.FixedPoint;
}

bool Fixed::operator<= ( const Fixed& fixed ) {
    return this->FixedPoint <= fixed.FixedPoint;
}

bool Fixed::operator== ( const Fixed& fixed ) {
    return this->FixedPoint == fixed.FixedPoint;
}

bool Fixed::operator!= ( const Fixed& fixed ) {
    return this->FixedPoint != fixed.FixedPoint;
}

// Arithmetic operators:
Fixed Fixed::operator+ ( const Fixed& fixed ) {
    Fixed result;
    result.FixedPoint = this->FixedPoint + fixed.FixedPoint;
    return result;
}

Fixed Fixed::operator- ( const Fixed& fixed ) {
    Fixed result;
    result.FixedPoint = this->FixedPoint - fixed.FixedPoint;
    return result;
}

Fixed Fixed::operator* ( const Fixed& fixed ) {
    Fixed result;
    result.FixedPoint = (this->FixedPoint * fixed.FixedPoint) / (1 << this->FractionalBits);
    return result;
}

Fixed Fixed::operator/ ( const Fixed& fixed ) {
    
    Fixed result(0);
    if (fixed.FixedPoint != 0) {
        result.FixedPoint = (this->FixedPoint * (1 << this->FractionalBits)) / fixed.FixedPoint;
        // result.FixedPoint = (this->FixedPoint << this->FractionalBits) / fixed.FixedPoint;
        return result;
    }
    return result;
}

// Increment/Decrement operators:
// The compiler distinguish between postfix and prefix with a dummy argument
Fixed& Fixed::operator++ () {
    ++this->FixedPoint;
    return *this;
}

Fixed Fixed::operator++ (int) {
    Fixed copy = *this;
    this->FixedPoint++;
    return copy;
}

Fixed& Fixed::operator-- () {
    --this->FixedPoint;
    return *this;
}

Fixed Fixed::operator-- ( int ) {
    Fixed copy = *this;
    this->FixedPoint--;
    return copy;
}

std::ostream& operator<< ( std::ostream& os, const Fixed& fixed ) {
    os << fixed.toFloat();
    return os;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->FixedPoint;
}

void Fixed::setRawBits( int const raw ) {
    this->FixedPoint = raw;
}

float Fixed::toFloat( void ) const {
    return (float)this->FixedPoint / (1 << this->FractionalBits);
}

int Fixed::toInt( void ) const {
    return this->FixedPoint / (1 << this->FractionalBits);
}

Fixed& Fixed::min(Fixed& first, Fixed& second) {
    return (first.FixedPoint < second.FixedPoint) ? first : second;
}

const Fixed& Fixed::min ( const Fixed& first, const Fixed& second ) {
    return (first.FixedPoint < second.FixedPoint) ? first : second;
}

Fixed& Fixed::max(Fixed& first, Fixed& second) {
    return (first.FixedPoint > second.FixedPoint) ? first : second;
}

const Fixed& Fixed::max ( const Fixed& first, const Fixed& second ) {
    return (first.FixedPoint > second.FixedPoint) ? first : second;
}
