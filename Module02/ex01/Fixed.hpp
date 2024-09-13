/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 09:12:56 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/13 09:24:36 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
    int FixedPoint;
    static const int FractionalBits;

public:
    Fixed();
    Fixed( const Fixed &fixed );
    Fixed& operator= ( const Fixed& copy );
    ~Fixed();

    std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
};

# endif // FIXED_HPP
