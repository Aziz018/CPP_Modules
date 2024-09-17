## 1. Visibility:

- **visibility** (or **access control**) refers to the control over access to members (variables and functions) of a class from different parts of the code. C++ provides three access specifiers for controlling the visibility of class members:

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

- Members declared as private are only accessible from within the class itself and friend classes or functions.
- They are not accessible from outside the class or from derived classes (when using public inheritance).
- Private members are encapsulated and hidden from any code that is not part of the class itself, including any derived class.

### Access level summary:

<center>

| Access level	| Access specifier	| Member access |	Derived class  access |	Public access |
|---------------|-------------------|---------------|-------------------------|---------------|
| Public   |	public:    |	yes  |	yes   |	yes    |
| Protected   |	protected:    |	yes  |	yes   |	no    |
| Private   |	private:    |	yes  |	no   |	no    |

</center>

## 2. What is Object Composition?
## 3. What is Object Inheritance?

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


## Resources:
- https://www.learncpp.com/cpp-tutorial/public-and-private-members-and-access-specifiers/
- Chatgpt