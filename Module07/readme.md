# Teamplates:

Templates in C++ are a powerful feature that allows you to write generic and reusable code. They enable you to define functions, classes, or data structures that work with any data type without having to rewrite the code for each type. Templates are particularly useful for creating libraries and generic algorithms.

## Function Templates:

### 1. Function Templates:

A **function template** defines a blueprint for a function that can operate on different data types. The data type is specified as a parameter when the function is called.

**Example:**

```c++
#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

template <typename T, typename P>
T add(T a, P b) {
    return a + b;
}

int main() {
    cout << add<int>(2, 3) << endl;      // Output: 5
    cout << add<double>(2.5, 3.5) << endl; // Output: 6
    return 0;
}
```
Here, `add` works for `int`, `double`, or any other type that supports the `+` operator.


## How Templates work?
