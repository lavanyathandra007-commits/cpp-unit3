#include <iostream>
using namespace std;
class Number {
private:
 int value;
public:
 // Constructor
 Number(int v = 0) {
 value = v;
 }
 // Friend function to overload unary minus (-)
 friend Number operator-(Number n);
 // Friend function to overload binary plus (+)
 friend Number operator+(Number n1, Number n2);
 // Display function
 void display() {
 cout << "Value = " << value << endl;
 }
};
// Unary minus operator using friend function
Number operator-(Number n) {
 return Number(-n.value);
}
// Binary addition operator using friend function

Number operator+(Number n1, Number n2) {
 return Number(n1.value + n2.value);
}
int main() {
 Number a(15), b(5), result;
 cout << "Original values:" << endl;
 a.display();
 b.display();
 // Binary operator +
 result = a + b;
 cout << "After Binary + Operator (a + b):" << endl;
 result.display();
 // Unary operator -
 result = -a;
 cout << "After Unary - Operator (-a):" << endl;
 result.display();
 return 0;
} 
