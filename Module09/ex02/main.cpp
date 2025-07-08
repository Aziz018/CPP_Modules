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
        std::vector<int>    vec;
        std::deque<int>     dec;

        parseInput(ac, av, vec);
        parseInput(ac, av, dec);

        std::cout << "Before: ";
        printContainer(vec);
        // printContainer(dec);

        clock_t vecStart = clock();
        fordJohnson(vec);
        clock_t vecEnd = clock();

        clock_t decStart = clock();
        fordJohnson(dec);
        clock_t decEnd = clock();

        std::cout << "After:  ";
        printContainer(vec);
        // printContainer(dec);

        double duration = double(vecEnd - vecStart) / CLOCKS_PER_SEC;
        std::cout   << "Time to process a range of " << vec.size()
                    << "elements with std::vector : " << duration * 1e6
                    << " µs\n";

        duration = double(decEnd - decStart) / CLOCKS_PER_SEC;
        std::cout   << "Time to process a range of " << dec.size()
                    << "elements with std::vector : " << duration * 1e6
                    << " µs";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }
}