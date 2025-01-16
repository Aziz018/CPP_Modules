/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:38:57 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/16 10:38:58 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    char c = 'a';
    int *p1 = (int *)&c; // allowed in C-Style cast.
    *p1 = 1000; // Pass at compile-time, but Fail at run-time because accessing 4 bytes and c has just 1 byte.

    // int *p2 = static_cast<int *>(&c); // compile-time Error.
    return 0;
}
