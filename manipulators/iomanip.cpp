/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iomanip.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 09:11:00 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/02 09:19:57 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int main() {
    std::cout << " | " << std::setfill('.') << std::left << std::setw(10) << "123"     << " | " << std::setw(10) <<"afasfas"      << " | " << std::endl;
    std::cout << " | " << std::setfill('.') << std::left << std::setw(10) << "aziz"    << " | " << std::setw(10) <<"afasasffas"   << " | " << std::endl;
    std::cout << " | " << std::setfill('.') << std::left << std::setw(10) << "helloo"  << " | " << std::setw(10) <<"afas"         << " | " << std::endl;
}