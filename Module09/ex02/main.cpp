#include "PmergeMe.hpp"

std::string trim(const std::string& str) {
    size_t start = str.find_first_not_of(" \t\n\r\f\v");
    if (start == std::string::npos) {
        return "";
    }
    size_t end = str.find_last_not_of(" \t\n\r\f\v");
    return str.substr(start, end - start + 1);
}

bool isNumber(const std::string strNumber) {
    for (size_t i = 0; i < strNumber.size(); ++i) {
        if (!std::isdigit(strNumber.at(i)))
            return false;
    }
    return true;
}

void checkNumber(const std::string& arg) {
    std::string trimedArg = trim(arg);
    if (trimedArg.empty()) {
        throw std::runtime_error("Error: empty parameter");
    }
    else if (!isNumber(trimedArg)) {
        throw std::runtime_error("Error: parameter not a number");
    }
    else if (trimedArg.size() > 10) {
        throw std::runtime_error("Error: number too big");
    }
}

int main(int ac, char* av[]) {
    if (ac < 2)
    {
        std::cerr   << "Usage:\n"
                    << "    ./PmergeMe [ numbers to sort separated by space ]"
                    << std::endl;
        return 1;
    }

    std::vector<int> container;
    try
    {
        for (int i = 1; i < ac; ++i) {
            checkNumber(av[i]);
            long number;
            std::istringstream ss(av[i]);

            ss >> number;
            if (number < 0 || number > 2147483647) {
                throw std::runtime_error("Error: number too big");
            }
            container.push_back(number);
        }        
        fordJohnson(container);

        for (size_t i = 0; i < container.size(); ++i) {
            std::cout << container.at(i) << " ";
        }
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }

}