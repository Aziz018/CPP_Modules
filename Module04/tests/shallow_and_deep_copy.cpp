/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shallow_and_deep_copy.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 08:05:05 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/29 08:05:07 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Shallow copy:

// #include <iostream>

// class Shallow {
// public:
//     int* ptr; // Pointer to dynamically allocated memory

//     // Constructor
//     Shallow(int value) {
//         ptr = new int(value); // Dynamically allocate memory
//         std::cout << "Constructor: Memory allocated for " << *ptr << std::endl;
//     }

//     // Default copy constructor (shallow copy)
//     Shallow(const Shallow& obj) {
//         ptr = obj.ptr; // Only the pointer's address is copied
//         std::cout << "Shallow Copy Constructor: Pointer copied." << std::endl;
//     }

//     // Destructor
//     ~Shallow() {
//         delete ptr; // Release the dynamically allocated memory
//         std::cout << "Destructor: Memory released." << std::endl;
//     }
// };

// int main() {
//     Shallow obj1(42);   // Create an object
//     // Shallow obj2 = obj1; // Perform shallow copy
//     Shallow obj2 (obj1); // Perform shallow copy

//     std::cout << "Object 1 ptr value: " << *(obj1.ptr) << std::endl;
//     std::cout << "Object 2 ptr value: " << *(obj2.ptr) << std::endl;

//     // Issue: Both objects share the same memory
//     *(obj2.ptr) = 99; // Modifying through obj2 affects obj1
//     std::cout << "After modification:\n";
//     std::cout << "Object 1 ptr value: " << *(obj1.ptr) << std::endl; // 99
//     std::cout << "Object 2 ptr value: " << *(obj2.ptr) << std::endl; // 99

//     return 0;
// }

// Deep copy:

#include <iostream>

class Deep {
public:
    int* ptr; // Pointer to dynamically allocated memory

    // Constructor
    Deep(int value) {
        ptr = new int(value); // Dynamically allocate memory
        std::cout << "Constructor: Memory allocated for " << *ptr << std::endl;
    }

    // Deep Copy Constructor
    Deep(const Deep& obj) {
        ptr = new int(*(obj.ptr)); // Allocate new memory and copy value
        std::cout << "Deep Copy Constructor: New memory allocated and value copied." << std::endl;
    }

    // Destructor
    ~Deep() {
        delete ptr; // Release the dynamically allocated memory
        std::cout << "Destructor: Memory released." << std::endl;
    }
};

int main() {
    Deep obj1(42);    // Create an object
    Deep obj2 = obj1; // Perform deep copy

    std::cout << "Object 1 ptr value: " << *(obj1.ptr) << std::endl;
    std::cout << "Object 2 ptr value: " << *(obj2.ptr) << std::endl;

    // Each object has its own memory, no interference
    *(obj2.ptr) = 99; // Modify obj2's memory only
    std::cout << "After modification:\n";
    std::cout << "Object 1 ptr value: " << *(obj1.ptr) << std::endl; // 42
    std::cout << "Object 2 ptr value: " << *(obj2.ptr) << std::endl; // 99

    return 0;
}
