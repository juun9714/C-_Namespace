#include <iostream>
using namespace std;

class MyClass {
public:
	void PrintThis() {
		cout << "���� �ּҴ� " << this << endl;
	}
	//this pointer�� �ڱⰡ �ҼӵǾ� �ִ� ��ü�� �ּҸ� ����Ų��. 
	//struct�� class�� �ҼӵǾ��ִ� ��� �Լ����� ������ �ʴ� �Ű������� this��� �ָ� ���� �ִ�. 
	/*
	void PrintThis(MyClass * ptr) {
		cout << "���� �ּҴ� " << ptr<< endl;
	}
	�� ���� ���� 
	*/
};
int main() {
	MyClass a, b;

	cout << "a�� �ּҴ� " << &a << endl;
	cout << "b�� �ּҴ� " << &b << endl;

	a.PrintThis();
	b.PrintThis();
	return 0;
}