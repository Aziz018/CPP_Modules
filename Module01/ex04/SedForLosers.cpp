/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedForLosers.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:17:35 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/04 11:26:15 by aelkheta         ###   ########.fr       */
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

// #include <iostream>
// #include <fstream>

// class SedForLosers {
// private:
//     std::string& fileName;
//     std::ifstream& inFile;
//     std::ofstream& outFile;

// public:
//     SedForLosers(std::string& _fileName, std::ifstream& _inFile, std::ofstream& _outFile)
//         : fileName(_fileName), inFile(_inFile), outFile(_outFile) {}
//     ~SedForLosers() {}
//     void isOpen() {
//         if (!inFile.is_open() || !outFile.is_open()) {
//             std::cerr << "Error: Files are not open.\n";
//             return;
//         }
//     }
    
//     void replaceAllWords(std::string& str1, std::string& str2) {
//         size_t pos;
//         std::string line;

//         while(getline(this->inFile, line))
//         {
//             pos = 0;
//             while ((pos = line.find(str1, pos)) != std::string::npos) {
//                 line.replace(pos, str1.length(), str2);
//                 pos += str2.length();
//             }
//             this->outFile << line << std::endl;
//         }
//     }
// };

// int main(int argc, char* argv[]) {
//     if (argc != 4) {
//         std::cerr << "Usage: " << argv[0] << " [filename] [string_1] [string_2]" << std::endl;
//         return 1;
//     }

//     std::string fileName = argv[1];
//     std::ifstream inFile(fileName);
//     std::ofstream outFile(fileName + ".out");

//     if (!inFile || !outFile) {
//         std::cerr << "Error opening files.\n";
//         return 1;
//     }

//     std::string str1(argv[2]);
//     std::string str2(argv[3]);
    
//     SedForLosers sed(fileName, inFile, outFile);
//     sed.replaceAllWords(str1, str2);

//     return 0;
// }
