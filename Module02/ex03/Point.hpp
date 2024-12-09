/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 13:11:50 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/09 13:27:49 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef POINT_H
# define POINT_H

# include "Fixed.hpp"

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        Point( const Fixed x, const Fixed y );
        Point( const Point& point );
        ~Point();
        Point& operator= ( const Point& point );
        
        Fixed getX() const;
        Fixed getY() const;
        
        Point operator+ ( const Point& point ) const;
        Point operator- ( const Point& point ) const;
        Point operator* ( const Point& point ) const;
        Point operator/ ( const Point& point ) const;
        Fixed cross(const Point& p) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

# endif // POINT_H
