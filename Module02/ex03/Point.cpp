/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 13:11:53 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/09 13:28:06 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Point.hpp"

Point::Point() : x(0), y(0) {}
Point::Point( const Fixed x, const Fixed y ) : x( x ), y( y ) {}
Point::Point( const Point& point ) : x(point.x), y(point.y) {}

Point& Point::operator= ( const Point& point ) {
    if (this != &point) {
        // this->x = point.x; x const can not change
        // this->y = point.y; y const can not change
    }
    return *this;
}

Point Point::operator+ (const Point& point) const {
    return Point(this->x + point.x, this->y + point.y);
}

Point Point::operator- (const Point& point) const {
    return Point(this->x - point.x, this->y - point.y);
}

Point Point::operator* (const Point& point) const {
    return Point(this->x * point.x, this->y * point.y);
}

Point Point::operator/ (const Point& point) const {
    return Point(this->x / point.x, this->y / point.y);
}

Fixed Point::cross(const Point& p) const {
    return x * p.y - y * p.x;
}

Fixed Point::getX() const {
    return this->x;
}
Fixed Point::getY() const {
    return this->y;
}

Point::~Point() {}
