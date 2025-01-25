/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 09:43:13 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/25 09:59:29 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <easyfind.hpp>
#include <vector>
#include <list>

int main()
{
    std::vector<int> vec;
    vec.push_back(3);
    vec.push_back(2);
    vec.push_back(7);
    vec.push_back(1);
    vec.push_back(4);
    vec.push_back(10);
    vec.push_back(6);
    vec.push_back(8);
    vec.push_back(5);
    vec.push_back(9);

    try
    {
        std::vector<int>::iterator it = easyfind(vec, 3);
        std::cout << "found the value " << *it << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::list<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);
    list.push_back(5);

    try
    {
        std::list<int>::iterator it = easyfind(list, 11);
        std::cout << "found the value " << *it << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
