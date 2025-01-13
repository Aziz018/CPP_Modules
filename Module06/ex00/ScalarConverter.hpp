/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 18:13:08 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/13 13:29:52 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include <cstdlib>  // for strtof strtod
#include <cmath>    // for isnan isinf

class ScalarConverter {
    private:
        static float ConvertToFloat();
        static double ConvertToDouble();

        static void PrintConversions(char c);
        static void PrintConversions(float f);
        static void PrintConversions(double d);

    public:
        static void convert(const std::string& literal);
};