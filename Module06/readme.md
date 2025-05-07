# C++ Casts or Type Casting (Type Conversion)

# Section 1: Type casting

## 1. Implicit Type Conversion

### **The standard conversions**
- The `standard conversions` can be broadly divided into 4 categories, each covering different types of conversions:

1. **Numeric promotions: (Floating-point and integral promotion)**

2. **Numeric conversions:**
3. **Arithmetic conversions:**
4. **Other conversions:**

## 2. Explicit Type Conversion

### Static cast

1. It performs implicit conversions between types.

```cpp
#include <iostream>

int main() {
    float f = 3.14;
    int a;

    a = f;
    a = static_cast<int>(f);
    return 0;
}
```
- Q. Why we use static_cast when implicit conversion is involved? 
- A. Because C-Style cast is hard to find in code, but you can search static_cast keyword.

2. Prevent dangerous casts - more restrective

```cpp
#include <iostream>

int main() {
    char c = 'a';
    int *p1 = (int *)&c; // allowed in C-Style cast.
    *p1 = 3; // Pass at compile-time, but Fail at run-time because accessing 4 bytes and c has just 1 byte.
    // if we compile with -fsanitize=address flag we'll see a stack-buffer-overflow

    int *p2 = static_cast<int *>(&c); // compile-time Error.
    return 0;
}
```

3. 
4. 
5. 
6. 
7. 


In C++, the casting operators `static_cast`, `dynamic_cast`, and `reinterpret_cast` are used for different types of conversions. Here's when and why you use each:

---

### 1. `static_cast`

**Use when:** You want to perform *compile-time* conversions between related types.

**Typical use cases:**

* Converting between numeric types (e.g., `int` to `float`).
* Upcasting in class hierarchies (e.g., `Derived*` to `Base*`).
* Downcasting in class hierarchies **only if you're sure** the cast is valid.
* Converting void pointers to typed pointers.

**Example:**

```cpp
float f = 3.14;
int i = static_cast<int>(f);  // float to int
```

---

### 2. `dynamic_cast`

**Use when:** You need *runtime-checked* conversions in class hierarchies (i.e., safe downcasting).

**Requirements:**

* Base class must have at least one virtual function (i.e., be polymorphic).
* Works only on pointers or references to polymorphic types.

**Typical use case:**

* Safely cast a `Base*` to a `Derived*`.

**Example:**

```cpp
Base* b = new Derived();
Derived* d = dynamic_cast<Derived*>(b);
if (d) {
    // Safe to use d
}
```

---

### 3. `reinterpret_cast`

**Use when:** You need to perform **bitwise reinterpretation** of types. This is the most dangerous cast and should be used **very carefully**.

**Typical use cases:**

* Converting between unrelated pointer types (e.g., `int*` to `char*`).
* Casting an integer to a pointer or vice versa (in low-level programming).

**Example:**

```cpp
int* ip = new int(10);
char* cp = reinterpret_cast<char*>(ip);  // reinterpret pointer type
```

---

### Summary Table:

| Cast Type          | Safety    | Checked at Runtime | Use Case                         |
| ------------------ | --------- | ------------------ | -------------------------------- |
| `static_cast`      | Safe      | No                 | Numeric, upcasting, void\*       |
| `dynamic_cast`     | Safe      | Yes                | Safe downcasting in polymorphism |
| `reinterpret_cast` | Dangerous | No                 | Low-level, bit-level operations  |

Would you like examples of each in a class hierarchy?



# Section 2: Literals

## 1. Scalar Types


# Resources

## learncpp:
- https://www.learncpp.com/cpp-tutorial/implicit-type-conversion/
- https://www.learncpp.com/cpp-tutorial/explicit-type-conversion-casting-and-static-cast/
- https://www.learncpp.com/cpp-tutorial/dynamic-casting/
- 
## cppreference:
- https://en.cppreference.com/w/cpp/language/implicit_conversion
- https://en.cppreference.com/w/cpp/language/implicit_conversion#Integral_promotion
- https://en.cppreference.com/w/cpp/language/explicit_cast
- https://en.cppreference.com/w/cpp/language/const_cast
- https://en.cppreference.com/w/cpp/language/static_cast
- https://en.cppreference.com/w/cpp/language/dynamic_cast
- https://en.cppreference.com/w/cpp/language/reinterpret_cast
