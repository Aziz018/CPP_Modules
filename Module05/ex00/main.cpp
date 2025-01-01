/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta1337@student.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:59:17 by aelkheta          #+#    #+#             */
/*   Updated: 2025/01/01 17:22:18 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Bureaucrat.hpp>

int main () {
    try {
        Bureaucrat b("bureaucrat", 0);
    }
    catch(std::exception& e) {
        std::cout << e.what();
    }

    return 0;
}