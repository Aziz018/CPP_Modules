/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:37:50 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/03 16:29:31 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main() {
    
    Harl harl;
    
    harl.complain("debug");
    harl.complain("info");
    harl.complain("warning");
    harl.complain("error");
    
    return 0;
}