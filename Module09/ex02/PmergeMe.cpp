#include "PmergeMe.hpp"

std::string trim(const std::string& str) {
    const std::string whitespace = " \t\n\r\f\v";
    size_t start = str.find_first_not_of(whitespace);

    if (start == std::string::npos) return "";

    size_t end = str.find_last_not_of(whitespace);
    return str.substr(start, end - start + 1);
}

bool isNumber(const std::string str) {
    if (str.empty()) return false;

    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
        if (!std::isdigit(static_cast<unsigned char>(*it))) return false;
    }
    return true;
}

void checkNumber(const std::string& arg) {
    std::string trimed = trim(arg);
    if (trimed.empty()) {
        throw std::runtime_error("Error: empty parameter");
    }
    else if (!isNumber(trimed)) {
        throw std::runtime_error("Error: parameter not a number");
    }
    else if (trimed.size() > 10) {
        throw std::runtime_error("Error: number too big");
    }
}

void parseInput(int ac, char* av[], std::vector<int>& container) {
    for (int i = 1; i < ac; ++i) {
        checkNumber(av[i]);
        long number;
        std::istringstream ss(av[i]);

        ss >> number;
        if (ss.fail() || !ss.eof()) {
            throw std::runtime_error("Error: invalid number format");
        }

        if (number > 2147483647) {
            throw std::runtime_error("Error: number too big");
        }
        container.push_back(number);
    }
}

/*
    The Jacobsthal sequence is defined as:
        J(0) = 0, J(1) = 1, J(n) = J(n − 1) + 2 ⋅ J(n − 2)
*/

/// @brief Generates the Jacobsthal number sequence up to (but not necessarily including) a given limit.
///        This sequence is used to determine the optimal insertion order in the Ford–Johnson algorithm.
///        Jacobsthal recurrence: J(n) = J(n-1) + 2 * J(n-2)
/// @param n Upper limit for the sequence (not necessarily included).
/// @return A vector containing the Jacobsthal sequence up to `n`.
std::vector<int> JacobsthalGenerator(int n) {
    std::vector<int> J;
    if (n >= 0) J.push_back(0); // J(0) = 0
    if (n == 1) return J;       // return [0] for n == 1
    J.push_back(1);             // J(1) = 1

    // Jacobsthal equation: J(n) = J(n-1) + 2 * J(n-2)
    while (J.back() < n)
    {
        int next = J.back() + 2 * J[J.size() - 2];
        J.push_back(next);
    }

    return J;
}

/// @brief Main Ford–Johnson (Merge-Insertion) sorting algorithm.
///        It sorts the input vector `c` in-place using a comparison-efficient method
///        based on pairing, recursion, and Jacobsthal-based insertion scheduling.
/// 
///        This is a recursive implementation with O(n log n) comparisons (better than standard merge sort).
/// 
///        Steps:
///        1. Split into pairs and separate max (bigs) and min (smalls).
///        2. Recursively sort the max values.
///        3. Use the Jacobsthal sequence to insert smalls into the sorted list with minimal comparisons.
/// 
/// @param c A vector of integers to be sorted (modified in-place).
void fordJohnson(std::vector<int>& c) {
    // Base case: already sorted
    if (c.size() <= 1)
        return;

    std::vector<std::pair<int, int> > pairs; // hold original pairs
    std::vector<int> b; // "big" values (maximums from pairs + leftover)
    std::vector<int> s; // "small" values (minimums from pairs)

    // Step 1: Form adjacent pairs from input array
    for (size_t i = 0; i + 1 < c.size(); i += 2) {
        pairs.push_back(std::make_pair(c[i], c[i + 1]));
    }

    // Step 2: From each pair, push max to b and min to s
    for (size_t i = 0; i < pairs.size(); ++i) {
        if (pairs[i].first < pairs[i].second)
            std::swap(pairs[i].first, pairs[i].second); // ensure first is larger
        b.push_back(pairs[i].first); // larger (to be recursively sorted)
        s.push_back(pairs[i].second); // smaller (to be inserted later)
    }

    // Step 3: If input size is odd, add the leftover element to b
    if (c.size() % 2)
        b.push_back(c.back());

    // Step 4: Recursively sort b
    fordJohnson(b);
    // std::sort(b.begin(), b.end());

    // Step 5: Early return if there are no small elements to insert
    int n = s.size();
    if (n == 0)
        return;

    // Step 6: Generate Jacobsthal sequence to determine insertion order
    std::vector<int> jac = JacobsthalGenerator(n + 2); // extra buffer to cover bounds
    std::vector<bool> inserted(n, false); // mark inserted elements

    // Step 7: Insert elements from s into sorted b using Jacobsthal order
    for (size_t i = 1; i < jac.size(); ++i) {
        int idx = jac[i] - 1; // Jacobsthal indices are 1-based
        if (idx >= 0 && idx < n && !inserted[idx]) {
            std::vector<int>::iterator it = std::lower_bound(b.begin(), b.end(), s[idx]); // binary search
            b.insert(it, s[idx]); // insert in sorted position
            inserted[idx] = true;
        }
    }

    // Step 8: Insert remaining elements not covered by Jacobsthal order
    for (int i = 0; i < n; ++i) {
        if (!inserted[i]) {
            std::vector<int>::iterator it = std::lower_bound(b.begin(), b.end(), s[i]);
            b.insert(it, s[i]);
        }
    }

    // Step 9: Copy final sorted array back to original input
    c = b;
}

/*
    std::lower_bound(begin, end, value);
    Returns an iterator pointing to the first element in [begin, end] which is not less than value.
    POV: “mn lekher ghadi yjib lik position ta3 (iterator) ta3 lik kber (or equal) value :D”
    IN ENGLISH: “Give me the earliest position where this value can go without breaking the sort order.”

    Example:
    ```c++
    std::vector<int> v = {1, 3, 5, 7};

    auto it = std::lower_bound(v.begin(), v.end(), 4);

    // *it == 5
    // insert at it → v becomes {1, 3, 4, 5, 7}
    ```
*/
