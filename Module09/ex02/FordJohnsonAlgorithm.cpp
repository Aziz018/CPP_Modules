#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdexcept>
#include <algorithm>
#include <set>

#include <sys/time.h> // gettimeofday

template <typename T>
void print_container(const T& v) {
    for (typename T::const_iterator it = v.begin(); it != v.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void merge_sort_vector(std::vector<int>& vec) {
    if (vec.size() <= 1) return;

    std::vector<int>::iterator mid = vec.begin() + vec.size() / 2;
    std::vector<int> left(vec.begin(), mid);
    std::vector<int> right(mid, vec.end());

    merge_sort_vector(left);
    merge_sort_vector(right);

    std::vector<int>::iterator it = vec.begin();
    std::vector<int>::iterator lit = left.begin();
    std::vector<int>::iterator rit = right.begin();

    while (lit != left.end() && rit != right.end()) {
        if (*lit <= *rit)
            *it++ = *lit++;
        else
            *it++ = *rit++;
    }

    while (lit != left.end()) *it++ = *lit++;
    while (rit != right.end()) *it++ = *rit++;
}

void merge_sort_deque(std::deque<int>& deq) {
    if (deq.size() <= 1) return;

    std::deque<int>::iterator mid = deq.begin() + deq.size() / 2;
    std::deque<int> left(deq.begin(), mid);
    std::deque<int> right(mid, deq.end());

    merge_sort_deque(left);
    merge_sort_deque(right);

    std::deque<int>::iterator it = deq.begin();
    std::deque<int>::iterator lit = left.begin();
    std::deque<int>::iterator rit = right.begin();

    while (lit != left.end() && rit != right.end()) {
        if (*lit <= *rit)
            *it++ = *lit++;
        else
            *it++ = *rit++;
    }

    while (lit != left.end()) *it++ = *lit++;
    while (rit != right.end()) *it++ = *rit++;
}

long gettime() {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return tv.tv_sec * 1e6 + tv.tv_usec;
}

// bool isContainerSorted(const std::vector<int>& container) {
template <typename T>
bool isContainerSorted(const T& container) {
    if (container.empty() || container.size() < 2) {
        std::cout << "\n---------- bruh ----------\n" << std::endl;
        return false;
    }

    for(size_t i = 0; i != container.size() - 1; ++i) {
        if (container.at(i) > container.at(i + 1)) {
            std::cout << "\n---------- bruh ----------\n" << std::endl;
            return false;
        }
    }

    std::cout << "\n---------- yay container is sorted ----------\n" << std::endl;
    return true;
}

// int main(int argc, char** argv) {
//     if (argc < 2) {
//         std::cerr << "Usage: ./PmergeMe <positive integers>" << std::endl;
//         return 1;
//     }

//     // std::cout << "[1] Parsing and validating input..." << std::endl;
//     std::vector<int> input;
//     std::set<int> seen;

//     for (int i = 1; i < argc; ++i) {
//         std::string arg(argv[i]);
//         for (size_t j = 0; j < arg.length(); ++j) {
//             if (!isdigit(arg[j])) {
//                 // std::cerr << "Error: Non-digit input" << std::endl;
//                 std::cerr << "Error:" << std::endl;
//                 return 1;
//             }
//         }

//         int num = std::atoi(argv[i]);
//         if (num < 0) {
//             // std::cerr << "Error: Negative input" << std::endl;
//             std::cerr << "Error:" << std::endl;
//             return 1;
//         }

//         if (seen.count(num)) {
//             std::cerr << "Error:" << std::endl;
//             // std::cerr << "Error: Duplicate input" << std::endl;
//             return 1;
//         }

//         seen.insert(num);
//         input.push_back(num);
//     }

//     // std::cout << "[2] Initial input:" << std::endl << "Before: ";
//     std::cout << "Before: ";
//     print_container(input);

//     // std::cout << "[3] Copying input into containers..." << std::endl;
//     std::vector<int> vec(input.begin(), input.end());
//     std::deque<int> deq(input.begin(), input.end());

//     // std::cout << "[4] Sorting with std::vector..." << std::endl;
//     long startVec = gettime();
//     merge_sort_vector(vec);
//     long endVec = gettime();

//     // std::cout << "[5] Sorting with std::deque..." << std::endl;
//     long startDeq = gettime();
//     merge_sort_deque(deq);
//     long endDeq = gettime();
    
//     // std::cout << "[6] Sorted result:" << std::endl << "After: ";
//     std::cout << "After: ";
//     print_container(vec);
//     // isContainerSorted(vec);

//     // std::cout << "After: ";
//     // print_container(deq);
//     // isContainerSorted(deq);

//     double timeVec = static_cast<double>(endVec - startVec);
//     double timeDeq = static_cast<double>(endDeq - startDeq);

//     // std::cout << "[7] Timing results:" << std::endl;
//     std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << timeVec << " us" << std::endl;
//     std::cout << "Time to process a range of " << deq.size() << " elements with std::deque  : " << timeDeq << " us" << std::endl;

//     return 0;
// }
