/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 13:11:48 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/09 13:56:43 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-gha <moel-gha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 21:23:10 by moel-gha          #+#    #+#             */
/*   Updated: 2024/10/05 21:23:11 by moel-gha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float triangleArea(Point a, Point b, Point c)
{
    Fixed Area((a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + (c.getX() * (a.getY() - b.getY())));
    return (fabs(Area.toFloat() / 2.0));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float Area = triangleArea(a, b, c);
    float Area1 = triangleArea(point, b, c);
    float Area2 = triangleArea(a, point, c);
    float Area3 = triangleArea(a, b, point);
    return (Area == (Area1 + Area2 + Area3));
}

// bool bsp( Point const a, Point const b, Point const c, Point const point) {
//     Point AB = b - a;
//     Point AP = point - a;
//     Point BC = c - b;
//     Point BP = point - b;
//     Point CA = a - c;
//     Point CP = point - c;

//     Fixed cross1 = AB.cross(AP);
//     Fixed cross2 = BC.cross(BP);
//     Fixed cross3 = CA.cross(CP);

//     return (cross1 >= 0 && cross2 >= 0 && cross3 >= 0) ||
//            (cross1 <= 0 && cross2 <= 0 && cross3 <= 0) ||
//            (cross1 == 0 || cross2 == 0 || cross3 == 0);
// }
