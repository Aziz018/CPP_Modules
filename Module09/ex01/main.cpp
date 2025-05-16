/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:52:59 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/02/01 17:53:00 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <RPN.hpp>

// int main(int argc, char* argv[]) {
//     if (argc != 2) {
//         std::cerr << "Usage: " << argv[0] << " \"RPN expression\"" << std::endl;
//         return 1;
//     }

//     try {
//         RPN calculator;
//         int result = calculator.evaluate(argv[1]);
//         std::cout << result << std::endl;
//     }
//     catch (const std::exception& e) {
//         std::cerr << e.what() << std::endl;
//         return 1;
//     }

//     return 0;
// }


#include <stdexcept>
#include <iostream>
#include <sstream>
#include <stack>
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

int main(int ac, char* av[]) {
    if (ac != 2) {
        std::cerr << "Usage: " << av[0] << " \"expression\"" << std::endl;
        return 1;
    }
    
    RPN calc;
    try {
        int result = calc.evaluate(av[1]);
        std::cout << result << std::endl;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}