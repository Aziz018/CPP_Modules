/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 08:14:53 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/09 11:57:38 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//      ┌─ Orthodox Canonical Form: the four required member functions. ─────┐
//      │                                                                    │
//      └─────────────────────────> Default constructor <────────────────────┘
//      │                                                                    │
//      └───────────────────────────> Copy constructor <─────────────────────┘
//      │                                                                    │
//      └────────────────────────> Copy assignment operator <────────────────┘
//      │                                                                    │
//      └─────────────────────────────> Destructor <─────────────────────────┘

//               ┌──────────────────── Class Code ────────────────────┐
//               │                                                    │
//    The header file: (.hpp/.h)                             the source file (.cpp)
//  contains the class definition.                         contains the implementation.

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
        Fixed( const Fixed& fixed );
        Fixed( const int fixed );
        Fixed( const float fixed );
        ~Fixed();
        
        Fixed& operator= ( const Fixed& fixedCopy );
        
        bool operator> ( const Fixed& fixed );
        bool operator< ( const Fixed& fixed );
        bool operator>= ( const Fixed& fixed );
        bool operator<= ( const Fixed& fixed );
        bool operator== ( const Fixed& fixed );
        bool operator!= ( const Fixed& fixed );

        Fixed operator+ ( const Fixed& fixed ) const;
        Fixed operator- ( const Fixed& fixed ) const;
        Fixed operator* ( const Fixed& fixed ) const;
        Fixed operator/ ( const Fixed& fixed ) const;

        Fixed& operator++ ();
        Fixed operator++ ( int );
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

std::ostream& operator<<( std::ostream& os, const Fixed& fixed );

# endif // FIXED_HPP