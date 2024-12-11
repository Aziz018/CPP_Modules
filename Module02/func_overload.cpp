/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_overload.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:10:35 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/10 17:06:21 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

// function overloading.

// based on the type of parameter.
void print(int a) {
    std::cout << a << std::endl;
}

void print(float a) {
    std::cout << a << std::endl;
}

void print(std::string a) {
    std::cout << a << std::endl;
}

// based on the number of parameters.
void print(int a, float b) {
    std::cout << "(" << a << ", " << b << ")" << std::endl;
}

// based on the order of parameters
void print(float a, int b) {
    std::cout << "(" << a << ", " << b << ")" << std::endl;
}

// ======================================== //

// Operator overloading:
// 

int main() {
    int a = 144;
    float b = 10.2;
    std::string c = "hello";

    print(a);
    print(b);
    print(c);
    print(10, 11.11);
    print(10.12, 11);
}