/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exeption.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 17:05:44 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/27 20:41:57 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main() {
    std::string word = "four";
    try {
        std::cout << word.at(3) << std::endl;
    }
    catch (...) {
        std::cout << "Execption thrown!" << std::endl;
    }

    return 0;
}
