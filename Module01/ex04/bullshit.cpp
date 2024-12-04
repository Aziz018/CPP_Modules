/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:43:01 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/04 11:12:16 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "SedIsForLosers.hpp"

void replaceWord(std::string& line, const std::string& oldWord, const std::string& newWord) {
    size_t pos = 0;
    
    while ((pos = line.find(oldWord, pos)) != std::string::npos) {
      line.replace(pos, oldWord.length(), newWord);
      pos += newWord.length();
    }
}

int main(int ac, char *av[]) {
    if (ac != 4)
    {
      std::cerr << "Usage: " << av[0] << " [filename] [string_1] [string_2]" << std::endl;
      return (1);
    }
    
    std::ifstream inFile(av[1]); // open the file with a constructor.
    
    std::string _outfile = std::string(av[1]) + ".out";
    std::ofstream outFile;
    outFile.open(_outfile.c_str()); // open the file with open methode.

    if (!inFile.is_open() || !outFile.is_open())
    {
      std::cerr << "Files are not opens!" << std::endl;
      return 1;
    }
    
    std::string line;
    std::string s1 = av[2];
    std::string s2 = av[3];
    
    while (getline(inFile, line))
    {
      replaceWord(line, s1, s2);
      outFile << line << std::endl;
    }

    outFile.close();
    std::cout << "Out file is closed" << std::endl;
    inFile.close();
    std::cout << "In file is closed" << std::endl;
    
    return (0);
}
