/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 18:15:10 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/16 14:47:31 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <whatever.hpp>

// ========================== subject main ========================== //

int main( void ) {
    int a = 2;
    int b = 3;

    ::swap( a, b );

    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);

    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}

// ========================== my tests ========================== //

// int main() {
//     int a_int = 10;
//     int b_int = 20;

//     double a_d = 10.21;
//     double b_d = 21.10;

//     std::cout << "--------> Before swap <--------" << std::endl;
//     std::cout << std::endl;

//     std::cout << "  -> int a: " << a_int << std::endl
//               << "  -> int b: " << b_int << std::endl;

//     std::cout << "  -> double a: " << a_d << std::endl
//               << "  -> double b: " << b_d << std::endl;

//     swap(a_int, b_int);
//     swap(a_d, b_d);
    
//     std::cout << std::endl;
//     std::cout << "---------> After swap <---------" << std::endl;
//     std::cout << std::endl;

//     std::cout << "  -> int a: " << a_int << std::endl
//               << "  -> int b: " << b_int << std::endl;
    
//     std::cout << "  -> double a: " << a_d << std::endl
//               << "  -> double b: " << b_d << std::endl;

//     std::cout << std::endl;
//     std::cout << "------------> End <------------" << std::endl;

//     return 0;
// }