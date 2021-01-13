#include <iostream>
using namespace std;

class MyClass {
public:
	void PrintThis() {
		cout << "나의 주소는 " << this << endl;
	}
	//this pointer는 자기가 소속되어 있는 객체의 주소를 가리킨다. 
	//struct나 class에 소속되어있는 모든 함수들은 보이지 않는 매개변수로 this라는 애를 갖고 있다. 
	/*
	void PrintThis(MyClass * ptr) {
		cout << "나의 주소는 " << ptr<< endl;
	}
	과 같은 것임 
	*/
};
int main() {
	MyClass a, b;

	cout << "a의 주소는 " << &a << endl;
	cout << "b의 주소는 " << &b << endl;

	a.PrintThis();
	b.PrintThis();
	return 0;
}