// #include "whatever.hpp"


// int main() {

//     Slack<int> ajemi(55);
//     std::cout << "Data: " << ajemi.getData() << std::endl;

//     return 0;
// }




#include <iostream>


template <typename T>
T min(T a, T b) {
    return a < b ? a : b;
}

int main()
{
    std::cout << "min(5, 66): " << min(5, 66) << std::endl;
    std::cout << "min(\"hell\", \"hello\"): " << min(5, 66) << std::endl;

    return 0;
}
