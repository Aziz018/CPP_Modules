/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 01:03:12 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/01 15:31:07 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <cctype>
#include <iostream>

/// @brief Return the uppercase version of the string.
/// @param str The sting that should be tronsformed.
void ippo_upper(char *str)
{
    for (int i = 0; str && str[i]; i++)
        std::cout << (char) std::toupper(str[i]);
}

int main(int ac, char **av)
{
    if (ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < ac; i++)
        {
            ippo_upper(av[i]);
            if (i + 1 < ac)
                std::cout << ' ';
        }
        std::cout << std::endl;
    }
}
