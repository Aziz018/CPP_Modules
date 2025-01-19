/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heisenberg <heisenberg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 09:43:13 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/19 16:52:54 by heisenberg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main() {
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(34);
    vec.push_back(3);

    try {
        std::vector<int>::iterator it = easyfind(vec, 2);
        std::cout << "Found: " << *it << std::endl;
    } catch (std::exception &e) {
        std::cout << "Value not found!" << std::endl;
    }

    return 0;
}