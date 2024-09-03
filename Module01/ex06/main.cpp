/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:40:09 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/03 17:15:50 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main(int ac, char** av) {
    
    if (ac != 2)
        return (1);
        
    Harl harl;

    std::string compalinLevel[4];

    compalinLevel[0] = "DEBUG";
    compalinLevel[1] = "INFO";
    compalinLevel[2] = "WARNING";
    compalinLevel[3] = "ERROR";

    for (int i = 0; i < 4; i++) {
        if (av[1] == compalinLevel[i]) {
            harl.complain(i);
            break;
        }
    }

    return (0);
}
