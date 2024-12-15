/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   virtual_inheritance.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 13:00:12 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/15 13:34:53 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>
// using namespace std;

// class A {
// public:
//     int value;
//     A() : value(0) { cout << "A constructor called\n"; }
// };

// class B : virtual public A {
// public:
//     B() { cout << "B constructor called\n"; }
// };

// class C : virtual public A {
// public:
//     C() { cout << "C constructor called\n"; }
// };

// class D : public B, public C {
// public:
//     D() { 
//         value = 42; // Initialize A's value
//         cout << "D constructor called\n"; 
//     }
// };

// int main() {
//     D obj;
//     cout << "Value in A: " << obj.value << endl;  // Output: 42
//     return 0;
// }

/* ================================================================== */

// Without virtual inheritance, the base class A is initialized twice,

#include <iostream>

class A {
public:
    int value;  // Member variable in A

    A() : value(0) { std::cout << "A constructor called\n"; }
    void setValue(int v) { value = v; }
    int getValue() const { return value; }
};

class B : public A {  // No virtual inheritance
public:
    void modifyValueInB() {
        std::cout << "Modifying value in B...\n";
        setValue(42);  // Update value in B's instance of A
    }
};

class C : public A {  // No virtual inheritance
public:
    void readValueInC() {
        std::cout << "Reading value in C: " << getValue() << std::endl;  // Access C's instance of A
    }
};

class D : public B, public C {  // Multiple inheritance, no virtual base
public:
    void showValueInD() {
        // Ambiguity: D now has two separate instances of A
        // Need to specify which instance of A we are referring to
        std::cout << "Value in D (via B's A): " << B::getValue() << std::endl;
        std::cout << "Value in D (via C's A): " << C::getValue() << std::endl;
    }
};

int main() {
    D obj;  // Create an instance of the most derived class

    // obj.modifyValueInB();  // Modify the value in B's instance of A
    // obj.readValueInC();    // Attempt to read the value in C's instance of A
    // obj.showValueInD();    // Compare the values in both instances of A

    obj.B::value = 1337;

    std::cout << "Value in C: " << obj.C::value << std::endl;
    std::cout << "Value in D: " << obj.B::value << std::endl;

    return 0;
}

/* ================================================================== */

// With virtual inheritance, the base class A is initialized only once,

// #include <iostream>

// class A {
// public:
//     int value;  // A shared member variable

//     A() : value(0) { std::cout << "A constructor called\n"; }
//     void setValue(int v) { value = v; }
//     int getValue() const { return value; }
// };

// class B : virtual public A {
// public:
//     void modifyValueInB(int value_) {
//         std::cout << "Modifying value in B...\n";
//         value = value_;  // Update value through B
//     }
// };

// class C : virtual public A {
// public:
//     void readValueInC() {
//         std::cout << "Reading value in C: " << value << std::endl; // getValue() << endl;  // Access value through C
//     }
// };

// class D : public B, public C {
// public:
//     void showValueInD() {
//         std::cout << "Value in D (via A): " << value << std::endl; // getValue() << endl;  // Access value in D
//     }
// };

// int main() {
//     D obj;  // Create an instance of the most derived class

//     obj.modifyValueInB(1337);   // Modify the value in B
//     // obj.readValueInC();         // Read the updated value in C
//     // obj.showValueInD();         // Confirm the value in D

//     obj.B::value = 1337;

//     std::cout << "Value in C: " << obj.C::value << std::endl;
//     std::cout << "Value in D: " << obj.value << std::endl;

//     return 0;
// }
