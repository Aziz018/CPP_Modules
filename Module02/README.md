# CPP Module 02

## Orthodox Canonical class form

          ┌─ Orthodox Canonical Form: the four required member functions. ─────┐
          │                                                                    │
          └─────────────────────────> Default constructor <────────────────────┘
          │                                                                    │
          └───────────────────────────> Copy constructor <─────────────────────┘
          │                                                                    │
          └────────────────────────> Copy assignment operator <────────────────┘
          │                                                                    │
          └─────────────────────────────> Destructor <─────────────────────────┘

                   ┌──────────────────── Class Code ────────────────────┐
                   │                                                    │
      The header file: (.hpp/.h)                             the source file (.cpp)
    contains the class definition.                         contains the implementation.

## Ad-hoc Polymorphism

- **Definition:** Ad-hoc polymorphism allows functions or operators to operate on arguments of different types, with specific implementations provided for each type. This is achieved through **function overloading** and **operator overloading**.

<br/>

- **or:** Ad-hoc polymorphism in C++ refers to the ability to define functions or operators that can operate on different types, where the behavior depends on the specific type of the arguments. It is implemented through function overloading and operator overloading.


### Function Overloading:

- **Definition:**
Function overloading in C++ is a feature that allows multiple functions to have the same name but differ in their parameter lists. The compiler determines which function to call based on the number, types, or order of arguments passed.

- **Key Rules for Function Overloading:**
1. Functions must have the same name.
2. The parameter list must differ in:
    - Number of parameters.
    - Types of parameters.
    - Order of parameters.
3. Return type cannot be used to distinguish overloaded functions.

**Examples:**

**1. Different Number of Parameters**
```cpp
#include <iostream>
using namespace std;

void display(int x) {
    cout << "Single integer: " << x << endl;
}

void display(int x, int y) {
    cout << "Two integers: " << x << " and " << y << endl;
}

int main() {
    display(10);       // Calls display(int x)
    display(10, 20);   // Calls display(int x, int y)
    return 0;
}
```

**2. Different Parameter Types**

```cpp
#include <iostream>
using namespace std;

void print(int i) {
    cout << "Integer: " << i << endl;
}

void print(double d) {
    cout << "Double: " << d << endl;
}

void print(string s) {
    cout << "String: " << s << endl;
}

int main() {
    print(10);        // Integer
    print(3.14);      // Double
    print("Hello");   // String
    return 0;
}
```

**3. Different Order of Parameters**

```cpp
#include <iostream>
using namespace std;

void print(int x, double y) {
    cout << "Integer: " << x << ", Double: " << y << endl;
}

void print(double y, int x) {
    cout << "Double: " << y << ", Integer: " << x << endl;
}

int main() {
    print(10, 3.14);   // Calls print(int x, double y)
    print(3.14, 10);   // Calls print(double y, int x)
    return 0;
}
```

#### What Function Overloading Cannot Do

**1. Overloading based only on return type:**

```cpp
int add(int a, int b);
double add(int a, int b); // Error: Ambiguous
```

**2. Differ only in default arguments:**

```cpp
void func(int x, int y = 0);
void func(int x); // Error: Ambiguous
```

### Operator overloading

**Definition:**

- Operator overloading in C++ allows you to define or redefine the behavior of operators for user-defined data types. This makes your classes work intuitively with operators like `+`, `-`, `*`, `==`, and many others, just as they do with built-in types.

**Key Points About Operator Overloading**

1. **Only existing operators can be overloaded**; you cannot create new operators.
2. **Some operators cannot be overloaded**, such as:
  - `.` (member access)
  - `::` (scope resolution)
  - `sizeof` (size determination)
  - `.*` (pointer-to-member)

3. **Syntax**: Operator overloading is done using the keyword `operator`.
4. **Operators can be overloaded as member functions or non-member (friend) functions**.

**Examples:**

**1. Overloading the `+` Operator**

```cpp
#include <iostream>
using namespace std;

class Complex {
private:
    double real, imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Overload + operator
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(1.0, 2.0), c2(2.0, 3.0);
    Complex c3 = c1 + c2;  // Calls operator+
    c3.display();          // Outputs: 3 + 5i
    return 0;
}
```

**2. Overloading the == Operator**

```cpp
#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    Point(int x, int y) : x(x), y(y) {}

    // Overload == operator
    bool operator==(const Point& other) const {
        return (x == other.x && y == other.y);
    }
};

int main() {
    Point p1(1, 2), p2(1, 2), p3(3, 4);

    cout << (p1 == p2) << endl;  // Outputs: 1 (true)
    cout << (p1 == p3) << endl;  // Outputs: 0 (false)
    return 0;
}
```

**3. Overloading the << Operator**

This is often used for custom output with `std::cout`.

```cpp
#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    Point(int x, int y) : x(x), y(y) {}

    // Overload << operator (as a friend function)
    friend ostream& operator<<(ostream& os, const Point& p) {
        os << "(" << p.x << ", " << p.y << ")";
        return os;
    }
};

int main() {
    Point p(3, 4);
    cout << "Point: " << p << endl;  // Outputs: Point: (3, 4)
    return 0;
}
```

**4. Overloading the [] Operator**

This is useful for creating custom container-like classes.

```cpp
#include <iostream>
using namespace std;

class Array {
private:
    int arr[10];
public:
    Array() {
        for (int i = 0; i < 10; i++) arr[i] = i + 1;
    }

    // Overload [] operator
    int& operator[](int index) {
        if (index < 0 || index >= 10) {
            throw out_of_range("Index out of range");
        }
        return arr[index];
    }
};

int main() {
    Array a;
    cout << "Element at index 3: " << a[3] << endl; // Outputs: Element at index 3: 4
    a[3] = 42;                                     // Modifies the array
    cout << "Modified element at index 3: " << a[3] << endl; // Outputs: 42
    return 0;
}
```

#### Advantages of Operator Overloading
1. **Intuitive Syntax:** Makes custom types behave like built-in types.
2. **Improved Readability:** Code becomes easier to read and understand.
3. **Flexibility:** Customizes behavior for specific operations.

#### Important Notes
1. Overloading should maintain the intuitive meaning of the operator. For example:
- `+` should represent addition or similar behavior.
- `==` should represent equality.
2. Use **friend functions** when overloading operators that require two operands and cannot be naturally implemented as a member function (e.g., `<<` or `>>`).

Operator overloading enhances code expressiveness and functionality when used judiciously.
