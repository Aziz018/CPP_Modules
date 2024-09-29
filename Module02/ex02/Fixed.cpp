/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 09:13:03 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/29 11:08:45 by aelkheta         ###   ########.fr       */
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

Fixed::Fixed( const int fixed ) {
    std::cout << "Int constructor called" << std::endl;
    FixedPoint = fixed * (1 << FractionalBits);
}

Fixed::Fixed( const float fixed ) {
    std::cout << "Float constructor called" << std::endl;
    FixedPoint = roundf(fixed * (1 << FractionalBits));
}

Fixed& Fixed::operator= ( const Fixed& copy ) {
    std::cout << "Copy assignment operator called" << std::endl;
    if ( this != &copy ) {
        // this->FixedPoint = copy.getRawBits();
        this->FixedPoint = copy.FixedPoint;
    }
    return *this;
}

std::ostream& operator<< ( std::ostream& os, const Fixed& fixed ) {
    os << fixed.toFloat();
    return os;
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
    return (float)(FixedPoint) / (1 << FractionalBits);
}

int Fixed::toInt( void ) const {
    return FixedPoint * (1 << FractionalBits);
}

bool Fixed::operator> ( const Fixed& fixed ) {
    return FixedPoint > fixed.FixedPoint;
}

bool Fixed::operator< ( const Fixed& fixed ) {
    return FixedPoint < fixed.FixedPoint;
}

bool Fixed::operator>= ( const Fixed& fixed ) {
    return FixedPoint >= fixed.FixedPoint;
}

bool Fixed::operator<= ( const Fixed& fixed ) {
    return FixedPoint <= fixed.FixedPoint;
}

bool Fixed::operator== ( const Fixed& fixed ) {
    return FixedPoint == fixed.FixedPoint;
    
}

bool Fixed::operator!= ( const Fixed& fixed ) {
    return FixedPoint != fixed.FixedPoint;
}

Fixed Fixed::operator+ ( const Fixed& fixed ) {
    Fixed result;
    result.FixedPoint = FixedPoint + fixed.FixedPoint;
    return result;
}

Fixed Fixed::operator- ( const Fixed& fixed ) {
    Fixed result;
    result.FixedPoint = FixedPoint - fixed.FixedPoint;
    return result;
}

Fixed Fixed::operator* (const Fixed& fixed) {
        Fixed result;
        result.FixedPoint = (this->FixedPoint * fixed.FixedPoint) / (1 << FractionalBits);
        return result;
}

Fixed Fixed::operator/ ( const Fixed& fixed ) {
    if (fixed.FixedPoint == 0) {
        throw std::invalid_argument("Division by zero!");
    }
    Fixed result;
    result.FixedPoint = (FixedPoint << FractionalBits) / fixed.FixedPoint;
    return result;
}

Fixed& Fixed::operator++ () {
    ++FixedPoint;
    return *this;
}

Fixed Fixed::operator++ ( int ) {
    Fixed copy = *this;
    FixedPoint++;
    return copy;
}

Fixed& Fixed::operator-- () {
    --FixedPoint;
    return *this;
}

Fixed Fixed::operator-- ( int ) {
    Fixed copy = *this;
    FixedPoint--;
    return copy;
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

