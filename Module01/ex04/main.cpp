/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:43:01 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/03 15:34:50 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "SedIsForLosers.hpp"

int main() {
    
    std::string fileName;
    std::string s1;
    std::string s2;

    std::cout << "Please enter a file name: "; 
    std::cin >> fileName;
    std::cout << "File name: " << fileName << std::endl;

    std::cout << "Please enter the first string: "; 
    std::cin >> s1;
    std::cout << "First string: " << s1 << std::endl;

    std::cout << "Please enter the second string: "; 
    std::cin >> s2;
    std::cout << "Second string: " << s2 << std::endl;


    std::ofstream outFile;
    outFile.open("out.txt"); // open the file with open methode.
    std::ifstream inFile("test.txt"); // open the file with a constructor.

    if (!outFile.is_open())
        std::cerr << "Error opening outfile" << std::endl;
    else
          std::clog << "Outfile opened" << std::endl;

    if (!inFile.is_open())
      std::cerr << "Error opening infile" << std::endl;
    else
      std::clog << "Infile opened" << std::endl;

    std::string word;    

    while (inFile >> word) {
        if (word == s1)
            word = s2;
        outFile << word << ' ';
    }
    std::cout << std::endl;


    outFile.close();
    std::cout << "Out file is closed" << std::endl;
    inFile.close();
    std::cout << "In file is closed" << std::endl;
    
    return (0);
}
