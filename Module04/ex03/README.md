# Subtype polymorphism, abstract classes, interfaces

## Subtype polymorphism

## abstract classes



### Virtual Functions

A **virtual function** is a special member function in a base class that you intend to be **overridden** (redefined) in its derived classes. When you declare a function as `virtual`, you're telling the compiler that it's not always the base class's version of the function that should be called. Instead, the actual type of the object at runtime will determine which version of the function gets executed. This ability is called **dynamic dispatch** or **late binding**.

**Example**

```c++
#include <iostream>

class Shape {
public:
    virtual void draw() {
        std::cout << "Drawing a generic shape\n";
    }
    virtual ~Shape() {} // IMPORTANT: Virtual destructor for proper cleanup
};

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle\n";
    }
};

class Square : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a square\n";
    }
};

void drawShape(Shape* shape) {
    shape->draw(); // Calls the correct `draw` function based on object's type
}


int main() {
  Shape* shape1 = new Shape();
  Shape* shape2 = new Circle();
  Shape* shape3 = new Square();

  drawShape(shape1);  // Output: Drawing a generic shape
  drawShape(shape2);  // Output: Drawing a circle
  drawShape(shape3);  // Output: Drawing a square

  delete shape1;
  delete shape2;
  delete shape3;


  return 0;
}
```

### Pure Virtual Functions

A **pure virtual function** is a `virtual function` that is declared with `= 0` at the end of its declaration within a class. This is done within the class definition, not when the function is implemented.

**Example**

```c++
#include <iostream>

class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
    virtual ~Shape() {}    // IMPORTANT: Virtual destructor for polymorphic deletes
};

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle\n";
    }
};

class Square : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a square\n";
    }
};

int main() {
    // Shape shape; // ERROR! Cannot create an object of abstract class Shape
    
    Shape* shape1 = new Circle();  // OK
    Shape* shape2 = new Square(); // OK

    shape1->draw(); // Output: Drawing a circle
    shape2->draw(); // Output: Drawing a square
    
    delete shape1;
    delete shape2;


    return 0;
}
```

### Difference Between Virtual Functions and Pure Virtual Functions:

| Feature |	Virtual Function |	Pure Virtual Function |
| ------- | ---------------- | ---------------------- |
| Implementation |	Can have an implementation in base class |	No implementation in base class |
| Override |	Optional (can be used in derived classes) |	Mandatory for concrete derived classes |
| Abstract | Class	Doesn't make the class abstract |	Makes the class abstract |
| Instantiation |	Can create objects of the base class |	Cannot create objects of the base class |
| Purpose |	Enables dynamic polymorphism |	Defines an interface and enforces implementation in derived classes |

