/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedForLosers.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:17:35 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/04 11:24:32 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <SedForLosers.hpp>

SedForLosers::SedForLosers(std::string& _fileName) : fileName(_fileName) {
        this->inFile.open(fileName.c_str());
        std::string oufName = fileName + ".replace";
        this->outFile.open(oufName.c_str());
    }

SedForLosers::~SedForLosers() {
    if (inFile.is_open())
        inFile.close();
    if (outFile.is_open())
        outFile.close();
}

bool SedForLosers::isOpen() {
    if (!this->inFile.is_open() || !this->outFile.is_open()) {
        std::cerr << "Error: Files are not open.\n";
        return false;
    }
    return true;
}

void SedForLosers::replaceAllWords(std::string& str1, std::string& str2) {
    size_t pos;
    std::string line;

    while(getline(this->inFile, line))
    {
        pos = 0;
        while ((pos = line.find(str1, pos)) != std::string::npos) {
            line.replace(pos, str1.length(), str2);
            pos += str2.length();
        }
        this->outFile << line << std::endl;
    }
}
