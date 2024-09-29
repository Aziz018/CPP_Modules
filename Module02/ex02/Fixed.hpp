/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 09:12:56 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/29 10:33:18 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
private:
    int FixedPoint;
    static const int FractionalBits;

public:
    Fixed();
    Fixed( const int fixed );
    Fixed( const float fixed );

    Fixed( const Fixed& fixed );
    Fixed& operator= ( const Fixed& copy );
    ~Fixed();

    bool operator> ( const Fixed& fixed );
    bool operator< ( const Fixed& fixed );
    bool operator>= ( const Fixed& fixed );
    bool operator<= ( const Fixed& fixed );
    bool operator== ( const Fixed& fixed );
    bool operator!= ( const Fixed& fixed );

    Fixed operator+ ( const Fixed& fixed );
    Fixed operator- ( const Fixed& fixed );
    Fixed operator* ( const Fixed& fixed );
    Fixed operator/ ( const Fixed& fixed );

    Fixed& operator++ ();
    Fixed operator++ (int);
    Fixed& operator-- ();
    Fixed operator-- ( int );

    static Fixed& max ( Fixed& first, Fixed& second );
    static Fixed& min ( Fixed& first, Fixed& second );

    static const Fixed& min ( const Fixed& first, const Fixed& second );
    static const Fixed& max ( const Fixed& first, const Fixed& second );

    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream& operator<< ( std::ostream& os, const Fixed& fixed );

# endif // FIXED_HPP
