#include "PmergeMe.hpp"

int main(int ac, char* av[]) {
    if (ac < 2)
    {
        std::cerr   << "Usage:\n"
                    << "    ./PmergeMe [ numbers to sort separated by space ]\n\n"
                    << "Example:\n"
                    << "    ./PmergeMe $(seq 1 15 | shuf | tr '\\n' ' ')\n"
                    << "or: ./PmergeMe 9 5 12 6 7 1"
                    << std::endl;
        return 1;
    }

    try
    {
        std::vector<int> container;
        parseInput(ac, av, container);
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