/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:53:03 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/02/01 17:53:04 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RPN.hpp>

bool RPN::isOperator(const std::string& token) {
    return (token == "+" || token == "-" || token == "*" || token == "/");
}

void RPN::performOperation(const std::string& op) {
    if (operands.size() < 2) {
        throw std::runtime_error("Error: insufficient operands for operation (multiple operator found)");
    }

    int right = operands.top();
    operands.pop();
    int left = operands.top();
    operands.pop();

    if (op == "+") {
        operands.push(left + right);
    } else if (op == "-") {
        operands.push(left - right);
    } else if (op == "*") {
        operands.push(left * right);
    } else if (op == "/") {
        if (right == 0) {
            throw std::runtime_error("Error: devision by 0");
        }
        operands.push(left / right);
    }
}

int RPN::evaluate(const std::string& expression) {
    std::istringstream iss(expression);
    std::string token;

    while(iss >> token) {
        if (isdigit(token[0])) {
            int num = std::atoi(token.c_str());
            if (num > 9) {
                throw std::runtime_error("Error: number must be < 10");
            }
            if (token.size() > 1) {
                throw std::runtime_error("Error: invalid token '" + token + "'");
            }
            operands.push(num);
        }
        else if (isOperator(token)) {
            performOperation(token);
        }
        else {
            throw std::runtime_error("Error: invalid token '" + token + "'");
        }
    }

    if (operands.size() != 1) {
        throw std::runtime_error("Error: ivalid expression");
    }
    return operands.top();
}
