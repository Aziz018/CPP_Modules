/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 18:13:10 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/13 18:08:18 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScalarConverter.hpp>

void ScalarConverter::PrintImpossible() {
    std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: " << "impossible" << std::endl;
    std::cout << "float: " << "impossible" << std::endl;
    std::cout << "double: " << "impossible" << std::endl;
}

void ScalarConverter::PrintConversions(char c) {
    std::cout << "char: " << "'" << c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
}

void ScalarConverter::PrintConversions(float f) {
    if (std::isnan(f) || std::isinf(f)) {
        std::cout << "char: " << "impossible" << std::endl;
    }
    else if (f < 13 || f >= 127) {
        std::cout << "char: " << "Non displayable" << std::endl;
    }
    else {
        std::cout << "char: " << "'" << static_cast<char>(f) << "'" << std::endl;
    }
    if (std::isnan(f) || std::isinf(f)) {
        std::cout << "int: " << "impossible" << std::endl;
    }
    else {
        std::cout << "int: " << static_cast<int>(f) << std::endl;
    }
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(f) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(f) << std::endl;
}

void ScalarConverter::PrintConversions(double d) {
    if (std::isnan(d) || std::isinf(d)) {
        std::cout << "char: " << "impossible" << std::endl;
    }
    else if (d < 13 || d >= 127) {
        std::cout << "char: " << "Non displayable" << std::endl;
    }
    else {
        std::cout << "char: " << "'" << static_cast<char>(d) << "'" << std::endl;
    }
    if (std::isnan(d) || std::isinf(d)) {
        std::cout << "int: " << "impossible" << std::endl;
    }
    else {
        std::cout << "int: " << static_cast<int>(d) << std::endl;
    }
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(d) << std::endl;
}

void ScalarConverter::convert(const std::string& literal) {
    char *endptr = NULL;

    if (literal.size() == 3 && literal.at(0) == '\'' && literal.at(2) == '\'') {
        char c = literal.at(1);
        ScalarConverter::PrintConversions(c);
    }
    else if (literal.at(literal.size() - 1) == 'f') {
        float f = strtof(literal.c_str(), &endptr);
        if (*endptr) {
            ScalarConverter::PrintImpossible();
        }
        else {
            ScalarConverter::PrintConversions(f);
        }
    }
    else {
        double d = strtod(literal.c_str(), &endptr);
        if (*endptr) {
            ScalarConverter::PrintImpossible();
        }
        else {
            ScalarConverter::PrintConversions(d);
        }
    }
}
