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