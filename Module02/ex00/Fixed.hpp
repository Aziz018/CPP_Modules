/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 21:45:44 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/15 21:51:21 by aelkheta         ###   ########.fr       */
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

//                 ┌──────────────────── Class Code ────────────────────┐
//                 │                                                    │
//    The header file: (.hpp/.h)                             the source file (.cpp)
//  contains the class definition.                         contains the implementation.

# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
private:
    int FixedPoint;
    static const int FractionalBits;

public:
    Fixed();
    Fixed( const Fixed &fixed );
    Fixed& operator= ( const Fixed& copy );
    ~Fixed();

    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

# endif // FIXED_HPP
