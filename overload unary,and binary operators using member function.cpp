#include<iostream>
using namespace std;
class Number{
private:
	int value;
public:
	Number(int v=0){
		value=v;
	}
	Number operator-(){
		return Number(-value);
	}
	Number operator+(const Number&obj){
		return Number(value+obj.value);
	}
	void display(){
		cout<<"Value="<<value<<endl;
	}
};
int main(){
	Number n1(10),n2(20),result;
	cout<<"Original values:"<<endl;
	n1.display();
	n2.display();
	result=n1+n2;
	cout<<"After Binary+OPerator(n1+n2):"<<endl;
	result.display();
	result=-n1;
	cout<<"After Unary - Operator(-n1):"<<endl;
	result.display();
	return 0;
}
