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

    for ( size_t i = 0; i < pairs.size(); ++i ) {
        winner.push_back(pairs[i].first);
        std::cout << pairs[i].first << " ";
    }
    std::cout << std::endl;

}

int main() {
    int array[] = {5, 1, 6, 2, 7, 0, 4, 8, 3};
    std::vector<int> arr(array, array + sizeof(array) / sizeof(int));

    fordJohnson(arr);
}