/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:02:09 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/29 14:15:28 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

// int main()
// {
//     Span sp(5);
//     for (int i = 0; i < 7; i++) {
//         try {
//             sp.addNumber(1 + i);
//         }
//         catch (std::exception &e) {
//             std::cout << e.what() << std::endl;
//         }
//     }
//     sp.print();

//     return 0;
// }

int main()
{
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    sp.print();

    return 0;
}