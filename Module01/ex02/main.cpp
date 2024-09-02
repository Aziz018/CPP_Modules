/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:16:01 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/02 22:35:00 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main() {
    std::string str = "HI THIS IS BRAIN";

    std::string* stringPTR = &str;
    std::string& stringREF = str;
    
    std::cout << "┌──────────────────────────────────────────────────────────────────────────────────────┐" << std::endl;
    std::cout << "│  The goal of this exercise is to demystify references which can seem completely new! │" << std::endl;
    std::cout << "└──────────────────────────────────────────────────────────────────────────────────────┘" << std::endl;

    std::cout << "=> The memory address of str: ------------- " << &str << std::endl;
    std::cout << "=> The memory address held by stringPTR: -- " << stringPTR << std::endl;
    std::cout << "=> The memory address held by stringREF: -- " << &stringREF << std::endl;


    std::cout << std::endl;
    std::cout << "=> The value of str: ---------------------- " << str << std::endl;
    std::cout << "=> The value pointed to by stringPTR: ----- " << *stringPTR << std::endl;
    std::cout << "=> The value pointed to by stringREF: ----- " << stringREF << std::endl;
    
    return (0);
}
