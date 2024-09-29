/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 21:45:41 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/21 20:52:11 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

const int Fixed::FractionalBits = 8;

/// @brief Default constructor for Fixed class.
Fixed::Fixed() : FixedPoint( 0 ) {
    std::cout << "Default constructor called" << std::endl;
}

/// @brief Copy constructor for Fixed class.
/// @param fixed The class to be copied.
Fixed::Fixed( const Fixed& fixed ) {
    std::cout << "Copy constructor called" << std::endl;
    this->FixedPoint = fixed.getRawBits();
}

/// @brief Copy assignment operator.
/// @param copy The class to be copied.
/// @return The copied class.
Fixed& Fixed::operator= ( const Fixed& copy ) {
    std::cout << "Copy assignment operator called" << std::endl;
    if ( this != &copy ) {
        this->FixedPoint = copy.getRawBits();
    }
    return *this;
}

/// @brief Default destructor for Fixed class.
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
