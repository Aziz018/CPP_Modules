/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 18:13:08 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/13 18:09:28 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <climits>
#include <iomanip>
#include <cstdlib>  // for strtof strtod
#include <cmath>    // for isnan isinf

class ScalarConverter {
    private:
        static void PrintImpossible();
        static void PrintConversions(char c);
        static void PrintConversions(float f);
        static void PrintConversions(double d);

    public:
        static void convert(const std::string& literal);
};