/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:53:06 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/02/01 17:53:07 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <stdexcept>
#include <cctype>
#include <cstdlib>

class RPN {
    private:
        std::stack<int> operands;
        bool isOperator(const std::string& token);
        void performOperation(const std::string& op);

    public:
        int evaluate(const std::string& expression);
};