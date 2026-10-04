#include <iostream>
using namespace std;

//////////////////////
// Single Inheritance
//////////////////////

class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

class Dog : public Animal { // Single inheritance
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};


//////////////////////
// Multiple Inheritance
//////////////////////

class A {
public:
    void displayA() {
        cout << "Class A" << endl;
    }
};

class B {
public:
    void displayB() {
        cout << "Class B" << endl;
    }
};

class C : public A, public B { // Multiple inheritance
public:
    void displayC() {
        cout << "Class C (derived from A and B)" << endl;
    }
};


//////////////////////
// Multilevel Inheritance
//////////////////////

class Vehicle {
public:
    void move() {
        cout << "Vehicle is moving." << endl;
    }
};

class Car : public Vehicle {
public:
    void start() {
        cout << "Car started." << endl;
    }
};

class SportsCar : public Car {
public:
    void turbo() {
        cout << "SportsCar in turbo mode!" << endl;
    }
};


//////////////////////
// Hierarchical Inheritance
//////////////////////

class Shape {
public:
    void draw() {
        cout << "Drawing a shape." << endl;
    }
};

class Circle : public Shape {
public:
    void area() {
        cout << "Area of Circle = pi*r^2" << endl;
    }
};

class Square : public Shape {
public:
    void area() {
        cout << "Area of Square = a^2" << endl;
    }
};


//////////////////////
// Hybrid Inheritance
//////////////////////

class Person {
public:
    void speak() {
        cout << "Person speaks." << endl;
    }
};

class Student : public Person {
public:
    void study() {
        cout << "Student is studying." << endl;
    }
};

class Employee {
public:
    void work() {
        cout << "Employee is working." << endl;
    }
};

class WorkingStudent : public Student, public Employee {
    // Hybrid: Student inherits from Person and WorkingStudent inherits
    // from both Student and Employee
public:
    void balance() {
        cout << "Working student balances work and study." << endl;
    }
};


//////////////////////
// Main Function
//////////////////////

int main() {

    cout << "=== Single Inheritance ===" << endl;
    Dog d;
    d.eat();
    d.bark();

    cout << "\n=== Multiple Inheritance ===" << endl;
    C objC;
    objC.displayA();
    objC.displayB();
    objC.displayC();

    cout << "\n=== Multilevel Inheritance ===" << endl;
    SportsCar sc;
    sc.move();
    sc.start();
    sc.turbo();

    cout << "\n=== Hierarchical Inheritance ===" << endl;
    Circle c;
    Square s;
    c.draw();
    c.area();
    s.draw();
    s.area();

    cout << "\n=== Hybrid Inheritance ===" << endl;
    WorkingStudent ws;
    ws.speak();
    ws.study();
    ws.work();
    ws.balance();

    return 0;
}
