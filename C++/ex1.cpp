#include <iostream>
using namespace std;

/*
동적 할당
-> 메모리를 유동적으로 할당한다.
-> 범위의 생성과 소멸과 무관하게 생성시점과 소멸시점을 프로그래머가 정할 수 있는 것
정적 할당
int a;
-> 해당 범위가 시작될때 생성되고, 종료되면 자동으로 소멸된다.
*/


int main() {
	int *a=new int(5);
	//new : 연산자 : 생성한 메모리의 주소값을 반환한다. 
	//그렇기 때문에 반환된 주소값을 저장하기 위한 포인터 변수에 반환값을 저장해야한다.
	cout << a << endl;
	cout << *a << endl;

	*a = 10;
	cout << a << endl;
	cout << *a << endl;

	delete a;
	return 0;
}