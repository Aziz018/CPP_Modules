# Operator overloading:

## Arithmetic operators

```cpp
#include <iostream>

class Complex {
    private:
        double real, img;
    public:
        Complex() : real(0), img(0) {}
        Complex(double r, double i) : real(r), img(i) {}
        Complex operator+ (const Complex& comp) const {
            return Complex(this->real + comp.real, this->img + comp.img); 
        }
        void display() const {
            std::cout << real << " + " << img << "i" << std::endl;
        }
}
```

## Summary of Overloadable Operators

| **Category**       | **Operator**  | **Description**                          | **Notes**                                                                 |
|---------------------|---------------|------------------------------------------|---------------------------------------------------------------------------|
| **Arithmetic**      | `+`           | Addition                                 |                                                                           |
|                     | `-`           | Subtraction                              |                                                                           |
|                     | `*`           | Multiplication                           |                                                                           |
|                     | `/`           | Division                                 |                                                                           |
|                     | `%`           | Modulus                                  |                                                                           |
| **Relational**      | `==`          | Equality                                 |                                                                           |
|                     | `!=`          | Inequality                               |                                                                           |
|                     | `<`           | Less than                                |                                                                           |
|                     | `>`           | Greater than                             |                                                                           |
|                     | `<=`          | Less than or equal                       |                                                                           |
|                     | `>=`          | Greater than or equal                    |                                                                           |
| **Logical**         | `&&`          | Logical AND                              |                                                                           |
|                     | `||`          | Logical OR                               |                                                                           |
|                     | `!`           | Logical NOT                              |                                                                           |
| **Bitwise**         | `&`           | Bitwise AND                              |                                                                           |
|                     | `|`           | Bitwise OR                               |                                                                           |
|                     | `^`           | Bitwise XOR                              |                                                                           |
|                     | `~`           | Bitwise NOT                              |                                                                           |
|                     | `<<`          | Bitwise left shift                       |                                                                           |
|                     | `>>`          | Bitwise right shift                      |                                                                           |
| **Assignment**      | `=`           | Assignment                               | Always requires `operator=` implementation for proper deep copying.      |
|                     | `+=`          | Add and assign                           |                                                                           |
|                     | `-=`          | Subtract and assign                      |                                                                           |
|                     | `*=`          | Multiply and assign                      |                                                                           |
|                     | `/=`          | Divide and assign                        |                                                                           |
|                     | `%=`          | Modulus and assign                       |                                                                           |
|                     | `&=`          | Bitwise AND and assign                   |                                                                           |
|                     | `|=`          | Bitwise OR and assign                    |                                                                           |
|                     | `^=`          | Bitwise XOR and assign                   |                                                                           |
|                     | `<<=`         | Left shift and assign                    |                                                                           |
|                     | `>>=`         | Right shift and assign                   |                                                                           |
| **Increment/Decrement** | `++`       | Increment (prefix and postfix)           | Prefix and postfix must be distinguished.                                |
|                     | `--`          | Decrement (prefix and postfix)           |                                                                           |
| **Unary**           | `+`           | Unary plus                               |                                                                           |
|                     | `-`           | Unary minus                              |                                                                           |
|                     | `*`           | Dereference                              | Often used in smart pointers.                                            |
|                     | `&`           | Address-of                               |                                                                           |
|                     | `!`           | Logical NOT                              |                                                                           |
|                     | `~`           | Bitwise NOT                              |                                                                           |
| **Subscript**       | `[]`          | Array subscript                          | Must return a reference for assignment use.                              |
| **Function Call**   | `()`          | Function call                            | Enables objects to be called like functions.                             |
| **Member Access**   | `->`          | Member access through a pointer          | Often overloaded in smart pointers.                                      |
| **Pointer-to-Member** | `->*`       | Member access through a pointer to member| Rarely used.                                                             |
| **Stream**          | `<<`          | Output stream                            | Must be a friend function to access private members.                     |
|                     | `>>`          | Input stream                             |                                                                           |
| **Other**           | `new`         | Object allocation                        | Must handle allocation errors.                                           |
|                     | `delete`      | Object deallocation                      |                                                                           |
|                     | `new[]`       | Array allocation                         |                                                                           |
|                     | `delete[]`    | Array deallocation                       |                                                                           |
| **Type Conversion** | `Type()`      | Conversion to a user-defined type        | Enables implicit and explicit conversions.                               |
| **Comma**           | `,`           | Comma                                    | Defines behavior when the comma operator is used.                        |
| **Pointer Comparisons** | `<=>`      | Three-way comparison (C++20)             | Provides a unified way to define all relational operators.               |
