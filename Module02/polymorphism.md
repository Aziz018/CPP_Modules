# Polymorphism

Polymorphism in C++ is one of the key principles of object-oriented programming. It allows a function, method, or operator to behave differently based on the context in which it is used. In C++, polymorphism comes in two forms:

<div align="center">
    <img src="./media/Polymorphism-in-CPP.png">
</div>

## 1. Compile-Time Polymorphism (Static Binding):

This form of polymorphism is resolved at compile time and is achieved using:

- **Function Overloading:** Functions with the same name but different parameter lists.
- **Operator Overloading:** Customizing the behavior of operators for user-defined types.

**Example: Function Overloading**
```cpp
#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;
    cout << calc.add(2, 3) << endl;         // Calls int version
    cout << calc.add(2.5, 3.5) << endl;     // Calls double version
    return 0;
}
```

## 2. Run-Time Polymorphism (Dynamic Binding):

This type of polymorphism is resolved at runtime and is achieved through **inheritance** and **virtual functions**. It allows for behavior to be defined in the base class but overridden in derived classes.

**Key Concepts:**
- **Virtual Functions:** Declared in the base class using the `virtual` keyword and overridden in derived classes.
- **V-Table:** A table of function pointers used to support dynamic dispatch.
- **Base Class Pointer:** Used to refer to derived class objects to invoke overridden functions.

**Example: Virtual Functions**
```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {  // Override the base class function
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* animal = new Dog();
    animal->speak();  // Calls the Dog's version of speak
    delete animal;
    return 0;
}
```

## Key Differences Between Compile-Time and Run-Time Polymorphism:

<div align="center">

| Feature   |	Compile-Time Polymorphism   |	Run-Time Polymorphism |
| --------- | ----------------------------- | ----------------------- |
| Resolution Time   |	Compile Time    |	Run Time    |
| Mechanism |	Function/Operator Overloading   |	Virtual Functions   |
| Flexibility   |	Limited |	More Flexible   |
| Overhead  |	None    |	Slight (due to V-Table) |

</div>

- https://catonmat.net/cpp-polymorphism
- https://www.geeksforgeeks.org/c-plus-plus/?ref=outind
- https://www.geeksforgeeks.org/cpp-polymorphism/
- https://www.geeksforgeeks.org/operator-overloading-cpp/
- https://www.geeksforgeeks.org/ad-hoc-inclusion-parametric-coercion-polymorphisms/