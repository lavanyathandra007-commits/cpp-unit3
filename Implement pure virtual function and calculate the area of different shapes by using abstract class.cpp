#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual float area() = 0;
};

// Derived class for Rectangle
class Rectangle : public Shape {
private:
    float length, breadth;

public:
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }

    float area() {
        return length * breadth;
    }
};

// Derived class for Circle
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    float area() {
        return 3.14159 * radius * radius;
    }
};

// Derived class for Triangle
class Triangle : public Shape {
private:
    float base, height;

public:
    Triangle(float b, float h) {
        base = b;
        height = h;
    }

    float area() {
        return 0.5 * base * height;
    }
};

// Main function
int main() {

    Shape* shape;

    Rectangle rect(10, 5);
    Circle circ(7);
    Triangle tri(8, 6);

    shape = &rect;
    cout << "Area of Rectangle: " << shape->area() << endl;

    shape = &circ;
    cout << "Area of Circle: " << shape->area() << endl;

    shape = &tri;
    cout << "Area of Triangle: " << shape->area() << endl;

    return 0;
}
