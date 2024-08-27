/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 09:26:12 by aelkheta          #+#    #+#             */
/*   Updated: 2024/08/27 15:57:54 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"


class entity
{
    int x;
    int y;

public:
    entity() : x(0) ,y(0) {}
    
    void print_params()
    {
        std::cout << "x = " << x << " y = " << y << std::endl;
    }

};

int main()
{

    entity en;

    en.print_params();
    // std::cout << "hello" << std::endl;
}