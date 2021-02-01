#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Base {
public:
	void bFunction() {
		cout << "Hello !" << endl;
	}
	
	int bnum;
};

class Derived : public Base {
public:
	void dFunction() {
		cout << "Hello ?" << endl;
	}

	int dnum;
};

int main() {
	Base b;
	Derived d;
	/*
	b.bFunction();
	b.bnum = 1;

	d.bFunction();
	d.bnum = 2;
	d.dFunction();
	d.dnum = 1;
	*/
	return 0;
}


/*
상속
부모가 자식에게 물려주는 것 

부모가 가진 것 -> 멤버 메서드, 멤버 변수 
자식에게 부모가 가진 멤버를 똑같이 전수를 해주는 것임 

자식은 또 자기만의 고유한 멤버를 가질 수 있음

자식 클래스가 부모클래스에 포함이 되는 것임

왜 ? 
-> 남자와 총각의 관계를 생각해보면 쉽다. 

*/

/*
접근제어
1. private 
: 외부 접근 불가
: 자식 클래스도 접근 불가, 상속은 가능함
2. public 
: 외부 접근 가능
: 자식 클래스의 접근 가능
3. protected
: 외부 접근 불가 
: 자식 클래스에서 접근 가능
: 외부말고 자기 자식들에게만 접근 허용 


*/