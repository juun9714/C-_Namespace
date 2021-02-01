#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Base {
public:
	int bPublic;

protected:
	int bProtected;
	//protected는 부모가 자식한테 물려줄 멤버를 지정하는 것이기 때문에 부모에서만 설정해주면 된다.
private:
	int bPrivate;
};
/*
상속시 쓰는 접근제어의 의미
-> 지정한 지시자보다 더 넓은 공개범위를 갖고 있는 멤버를 지정된 지시자 수준으로 내린다. 
*/
class Derived : protected Base {
public:
	int dPublic;
	void DFunc() {
		bPublic = 1;
		bProtected = 2;
		//bPrivate = 3;
		dPublic = 4;
		dPrivate = 5;

	}
private:
	int dPrivate;
};

int main() {
	Base b;
	Derived d;
	
	b.bPublic = 1;

	d.bPublic = 3;
	d.dPublic = 2;
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


부모클래스에서 public으로 정의되어 있는 멤버는 자식 클래스에서도 public으로 인식
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