#include <iostream>
#include <algorithm>
#include <vector>

void fordJohnson(std::vector<int>& arr) {

    if (arr.size() <= 1)
        return ;

    std::vector<std::pair<int, int> > pairs;
    std::vector<int> winner;
    std::vector<int> looser;

    for ( size_t i = 0; i + 1 < arr.size(); i += 2 ) {
        if (arr[i] < arr[i + 1])
            pairs.push_back(std::make_pair(arr[i + 1], arr[i]));
        else
            pairs.push_back(std::make_pair(arr[i], arr[i + 1]));
    }

    std::cout << std::endl;
    for ( size_t i = 0; i < pairs.size(); ++i ) {
        std::cout << "(" << pairs[i].first << "," << pairs[i].second << ") ";
    }
    std::cout << std::endl;
    std::cout << std::endl;

    std::sort(pairs.begin(), pairs.end());

    for ( size_t i = 0; i < pairs.size(); ++i ) {
        std::cout << "(" << pairs[i].first << "," << pairs[i].second << ") ";
    }
    std::cout << std::endl;

    for ( size_t i = 0; i < pairs.size(); ++i ) {
        winner.push_back(pairs[i].first);
        looser.push_back(pairs[i].second);
    }

    std::cout << std::endl;

    // for ( size_t i = 0; i < winner.size(); ++i ) {
    //     std::cout << winner[i] << " ";
    // }
    // std::cout << std::endl;
    // for ( size_t i = 0; i < looser.size(); ++i ) {
    //     std::cout << looser[i] << " ";
    // }

    for (size_t i = 0; i < looser.size(); ++i)
        winner.insert(std::upper_bound(winner.begin(), winner.end(), looser[i]), looser[i]);

    for ( size_t i = 0; i < winner.size(); ++i ) {
        std::cout << winner[i] << " ";
    }
    // std::cout << std::endl;
    // for ( size_t i = 0; i < looser.size(); ++i ) {
    //     std::cout << looser[i] << " ";
    // }

    std::cout << std::endl;
    std::cout << std::endl;
}

int main(int ac, char* av[]) {

    if (ac < 2) {
        std::cerr << "Usage:\n\t" << av[0] << " [sequence of numbers]" << std::endl;
        return 1;
    }

    char *end;
    std::vector<int> arr;
    for ( int i = 1; i < ac; ++i ) {
        int element = std::strtol(av[i], &end, 10);
        if (*end != '\0') {
            std::cerr << "Invalid element: " << av[i] << std::endl;
            return 1;
        }
        // std::cout << i << ": " << element << std::endl;
        arr.push_back(element);
    }

    fordJohnson(arr);
}
