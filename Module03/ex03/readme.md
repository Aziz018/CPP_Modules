## Visibility:
**Visibility** (or **access control**) refers to the control over access to members (variables and functions) of a class from different parts of the code. C++ provides three access specifiers for controlling the visibility of class members:

### 1. Public:
- Members declared as `public` are accessible from `anywhere` in the code where the object is visible.
- This means both inside the class and outside the class, such as in functions, derived classes, or other objects, the public members can be accessed directly.

**Example:**
```c++
    class MyClass {
    public:
        int publicVar;      // Public member
        void publicMethod() // Public method
        {
            // Method implementation
        }
    };
    int main() {
        MyClass obj;
        obj.publicVar = 10; // Accessible directly
        obj.publicMethod(); // Accessible directly
    }
```
### 2. protected:
- Members declared as `protected` are only accessible from within the **class itself**, **friend classes**, and **derived classes** (inherited classes).
- These members are not accessible from outside the class (i.e., through an object of the class), but they can be accessed from within classes that inherit from this class.
**Example:**
```c++
class Base {
protected:
    int protectedVar; // Protected member
};
class Derived : public Base {
public:
    void accessProtectedVar() {
        protectedVar = 20; // Accessible in the derived class
    }
};
int main() {
    Derived obj;
    // obj.protectedVar = 30; // Error! Can't access protected member directly
}
```
### 3. Private:
- Members declared as `private` are only accessible from within the **class itself** and **friend classes or functions**.
- They are not accessible from outside the class or from derived classes (when using public inheritance).
- Private members are encapsulated and hidden from any code that is not part of the class itself, including any derived class.

**Example:**
### Access level summary:
</div align="center">

| Access level	| Access specifier	| Member access |	Derived class  access |	Public access |
|---------------|-------------------|---------------|-------------------------|---------------|
| Public   |	public:    |	yes  |	yes   |	yes    |
| Protected   |	protected:    |	yes  |	yes   |	no    |
| Private   |	private:    |	yes  |	no   |	no    |

</div>

## Relationships in C++

**Relationships** are used to define how classes, objects, and other components interact with each other.

## 1. Object Composition ("has-a" Relationship)

**Composition** creates a relationship where one class contains another class, forming a "has-a" relationship. Instead of inheriting, one class becomes a member of another.

**Example:**

```cpp
#include <iostream>
#include <string>

class Engine {
public:
    Engine(const std::string& type) : type_(type) {}
    void start() const {
        std::cout << "Engine of type " << type_ << " started.\n";
    }

private:
    std::string type_;
};

class Car {
public:
    Car(const std::string& brand, const std::string& engineType)
        : brand_(brand), engine_(engineType) {}

    void startCar() const {
        std::cout << "Starting car: " << brand_ << "\n";
        engine_.start();
    }

private:
    std::string brand_;
    Engine engine_;  // Composition: Car "has-a" Engine.
};

int main() {
    Car car("Toyota", "V8");
    car.startCar();
    return 0;
}
```

## 2. Inheritance ("is-a" Relationship)

**Inheritance** is used to express a hierarchical relationship where one class derives from another. It represents an "is-a" relationship.

```c++
class Base {
public:
    int publicVar;
protected:
    int protectedVar;
private:
    int privateVar;
};
class DerivedPublic : public Base {
    // publicVar remains public
    // protectedVar remains protected
    // privateVar is inaccessible
};
class DerivedProtected : protected Base {
    // publicVar becomes protected
    // protectedVar remains protected
    // privateVar is inaccessible
};
class DerivedPrivate : private Base {
    // publicVar becomes private
    // protectedVar becomes private
    // privateVar is inaccessible
};
```

**Example:**
```cpp
class Animal {
public:
    void eat() { std::cout << "Eating\n"; }
};

class Dog : public Animal {
public:
    void bark() { std::cout << "Barking\n"; }
};

int main() {
    Dog d;
    d.eat();  // From Animal
    d.bark(); // From Dog
    return 0;
}
```

**There are several types of inheritance in c++:**

### Types of inheritance

1. **Single Inheritance**: A derived class inherits from only one base class.

```c++
class Base {};

class Derived : public Base {};
```

2. **Multiple Inheritance**: A derived class inherits from more than one base class.

```c++
class Base1 {};

class Base2 {};

class Derived : public Base1, public Base2 {};
```

3. **Multilevel Inheritance**: A class is derived from another derived class.

```c++
class Base {};

class Intermediate : public Base {};

class Derived : public Intermediate {};
```

4. **Hierarchical Inheritance**: Multiple classes are derived from a single base class.

```c++
class Base {};

class Derived1 : public Base {};

class Derived2 : public Base {};
```

5. **Hybrid Inheritance**: A combination of two or more types of inheritance.

```c++
class Base {};

class Intermediate1 : public Base {};

class Intermediate2 {};

class Derived : public Intermediate1, public Intermediate2 {};
```

### Summary of Relationships in C++

| Relationship  |	Description |	Example |
| ------------- | ------------- | --------- |
| Inheritance   |	"is-a" relationship |	Dog is an Animal    |
| Composition   |	"has-a" relationship    |	Car has an Engine   |
| Association   |	General relationship    |	Teacher ↔ Student   |
| Aggregation   |	Weak ownership	|   Department ↔ Professor  |
| Dependency    |	"uses-a" relationship   |	Office ↔ Printer    |

## Resources:
- https://www.learncpp.com/cpp-tutorial/public-and-private-members-and-access-specifiers/
- Chatgpt