/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heisenberg <heisenberg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:02:09 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/28 21:00:16 by heisenberg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

int main()
{
    Span sp(5);
    for (int i = 0; i < 7; i++) {
        try {
            sp.addNumber(1 + i);
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    sp.print();

    return 0;
}