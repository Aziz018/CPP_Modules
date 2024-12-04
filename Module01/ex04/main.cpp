/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:05:41 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/04 11:19:47 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <SedForLosers.hpp>

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " [filename] [string_1] [string_2]" << std::endl;
        return 1;
    }

    std::string fileName = argv[1];
    SedForLosers sed(fileName);
    std::string str1(argv[2]);
    std::string str2(argv[3]);
    
    if (!sed.isOpen() || str1.empty() || str2.empty())
        return 1;

    sed.replaceAllWords(str1, str2);

    return 0;
}
