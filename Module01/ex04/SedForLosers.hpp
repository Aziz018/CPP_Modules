/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedForLosers.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:17:57 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/04 11:22:00 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//                ┌───── ios ─────┐
//                │               │
//         ┌─ istream ──┐ ┌── ostream ─┐
//         │            │ │            │
//      ifstream     iostream     ofstream
//         │                           │
//         └────────> fstream <────────┘

// fstream it's a combinaison of ofstream and ifstream classes.
// ofstream is a stream class to write on files.
// ifstream is a stream class to read from files.

# ifndef SED_FOR_LOSERS_HPP
# define SED_FOR_LOSERS_HPP

#include <iostream>
#include <fstream>

class SedForLosers {
private:
    std::string fileName;
    std::ifstream inFile;
    std::ofstream outFile;

public:
    SedForLosers(std::string& _fileName);
    ~SedForLosers();
    bool isOpen();
    void replaceAllWords(std::string& str1, std::string& str2);
};

# endif // SED_FOR_LOSERS_HPP
 