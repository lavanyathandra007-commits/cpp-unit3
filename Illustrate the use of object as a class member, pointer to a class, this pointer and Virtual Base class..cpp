#include <iostream>
#include <string>

using namespace std;

/////////////////////////////
// 1. Object as Class Member
/////////////////////////////

class Address {
public:
    string city;
    int pincode;

    Address(string c, int p) : city(c), pincode(p) {}

    void show() {
        cout << "City: " << city << ", Pincode: " << pincode << endl;
    }
};

class Person {
private:
    string name;
    Address addr; // Object as class member

public:
    Person(string n, string c, int p) : name(n), addr(c, p) {}

    void display() {
        cout << "Name: " << name << endl;
        addr.show();
    }
};


/////////////////////////////
// 2. Pointer to a Class
/////////////////////////////

class Number {
private:
    int value;

public:
    void set(int v) {
        value = v;
    }

    void show() {
        cout << "Value: " << value << endl;
    }
};


/////////////////////////////
// 3. This Pointer
/////////////////////////////

class Counter {
private:
    int count;

public:
    Counter(int count) {
        this->count = count; // Using this pointer to refer to current object
    }

    void display() {
        cout << "Count is: " << this->count << endl;
    }
};


/////////////////////////////
// 4. Virtual Base Class
/////////////////////////////

class A {
public:
    void display() {
        cout << "Class A display()" << endl;
    }
};

class B : virtual public A {
};

class C : virtual public A {
};

class D : public B, public C {
    // Inherits A virtually via both B and C to avoid duplication
};


/////////////////////////////
// Main Function
/////////////////////////////

int main() {

    cout << "=== 1. Object as a Class Member ===" << endl;

    Person p("Alice", "Mumbai", 400001);
    p.display();


    cout << "\n=== 2. Pointer to a Class ===" << endl;

    Number n;
    Number* ptr = &n; // Pointer to class

    ptr->set(100);
    ptr->show();


    cout << "\n=== 3. This Pointer ===" << endl;

    Counter c(10);
    c.display();


    cout << "\n=== 4. Virtual Base Class ===" << endl;

    D d;
    d.display(); // Only one instance of A is shared


    return 0;
}
