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


Templates in C++ allow you to write **generic and reusable code**. They enable functions and classes to operate with **any data type** without rewriting code for each type. C++ templates come in two primary forms:

---

### 2. **Class Templates**

Class templates allow you to define classes that operate on generic types.

#### Syntax:

```cpp
template <typename T>
class Box {
private:
    T value;
public:
    void set(T v) { value = v; }
    T get() const { return value; }
};
```

#### Usage:

```cpp
Box<int> intBox;
intBox.set(100);

Box<std::string> strBox;
strBox.set("Hello");
```

---

### Key Concepts

* `template<typename T>` and `template<class T>` are equivalent.
* Templates are **instantiated** at compile time.
* You can create **template specializations** to define custom behavior for specific types.
* Templates support **multiple parameters**:

  ```cpp
  template <typename T, typename U>
  class Pair { ... };
  ```

---

### Example: Template Specialization

```cpp
template <typename T>
class Printer {
public:
    void print(T value) {
        std::cout << value << std::endl;
    }
};

// Specialization for bool
template <>
class Printer<bool> {
public:
    void print(bool value) {
        std::cout << (value ? "true" : "false") << std::endl;
    }
};
```

---

### Why Use Templates?

* **Code reuse**: Write once, use with any type.
* **Type safety**: Errors are caught at compile time.
* **Performance**: Inline expansion often happens with templates.

---

## 🔧 1. **Template Specialization**

Template specialization lets you provide **custom behavior** for specific types when using templates.

### 👉 *Example: Basic Specialization*

```cpp
template <typename T>
struct Printer {
    void print() {
        std::cout << "Generic Printer\n";
    }
};

// Specialization for int
template <>
struct Printer<int> {
    void print() {
        std::cout << "Integer Printer\n";
    }
};
```

### 🧠 Use Case:

This is useful when a generic algorithm works for most types, but **some types need special treatment**.

---

## 🧠 2. **Template Metaprogramming**

Template metaprogramming is using templates to **compute values at compile-time**, effectively writing *programs that run during compilation*.

### 👉 *Example: Factorial at Compile-Time*

```cpp
template <int N>
struct Factorial {
    static const int value = N * Factorial<N - 1>::value;
};

template <>
struct Factorial<0> {
    static const int value = 1;
};
```

### 💡 Usage:

```cpp
int result = Factorial<5>::value;  // Computed at compile time: 120
```

### ⚙️ How It Works:

Templates are instantiated by the compiler in a recursive way—each instantiation “calls” the next.

---

## 🧱 Template Metaprogramming Building Blocks

| Feature                | Description                              |
| ---------------------- | ---------------------------------------- |
| `template<typename T>` | Type-based template                      |
| `template<int N>`      | Non-type template parameter              |
| Specialization         | Custom template for certain types/values |
| `constexpr` (C++11+)   | Enables true compile-time functions      |
| `std::enable_if`       | Type-based logic using SFINAE            |
| Concepts (C++20)       | Restrict template types elegantly        |

---

## 🧩 Advanced Example: Type Traits

```cpp
template <typename T>
struct is_pointer {
    static const bool value = false;
};

template <typename T>
struct is_pointer<T*> {
    static const bool value = true;
};
```

Used to detect pointer types at compile time. This pattern forms the basis of the **type traits** in `<type_traits>`.

---

## How Templates work?
