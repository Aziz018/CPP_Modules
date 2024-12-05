/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:19:09 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/04 13:14:07 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main() {
    int N = 5;
    std::string name = "Zombie";

    Zombie* horde = zombieHorde(N, name);
    if (!horde) {
        return 1;
    }
    
    for (int i = 0; i < N; ++i) {
        std::cout << "my name is: " << horde[i].getName() << std::endl;
    }

    for (int i = 0; i < N; ++i) {
        horde[i].announce();
    }

    delete[] horde;
    return 0;
}
