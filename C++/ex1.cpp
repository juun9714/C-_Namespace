#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class String {
public:
	String() {
		cout << "String() 생성자 호출" << endl;
		strData = NULL;
		len = 0;
	}

	String(const char* str) {
		cout << "String(const char* str) 생성자 호출" << endl;
		len = strlen(str);
		strData = new char[len+1];//NULL을 위한 +1
		cout << "strData 할당 : "<<(void *)strData<< endl;
		strcpy(strData, str);//깊은 복사
		//iostream에 포함되어 있음
	}

	String(const String& rhs) {
		//복사생성자의 경우 class의 정의안에서 해당 class를 매개변수로 쓰는것 불가(String(String rhs)), 
		//다른 생성자나 멤버 메서드에서는 가능
		cout << "String(String& rhs) 생성자 호출" << endl;

		strData = new char[rhs.len + 1];//NULL을 위한 +1
		cout << "strData 할당 : " << (void*)strData << endl;
		strcpy(strData, rhs.strData);//깊은 복사
		len = rhs.len;
	}

	~String(){
		//메모리 해제
		cout << "~String() 소멸자 호출" << endl;
		delete[] strData;
		cout << "strData 해제됨 : " <<(void*)strData<< endl;
		strData = NULL;
		//해제된 메모리에 접근을 막기 위한 NULL 할당
	}

	char* GetStrData() const{
		return strData;
	}

	int GetLen() const{
		return len;
	}

private:
	char* strData;//동적할당한 문자열의 주소를 저장?
	int len;
};


int main() {
	String s1("안녕");
	String s2(s1);//복사 생성자 
	String s3;

	/*
	복사 생성자
	: 선언되는 객체와 같은 자료형의 객체를 인수로 전달하는 생성자
	: 인수는 참조자(생성자 정의시 &)로 전달
	: 전달되는 인수는 대개 const 선언
	-> default로 정의되는 복사생성자가 있지만, 포인터 복사의 경우 얕은 복사가 이루어지게 됨. 
	-> 그렇기 때문에 포인터복사를 해야하는 경우 복사 생성자를 선언, 정의해주어야 한다. 
	*/

	cout << s1.GetStrData() << endl;
	cout << s2.GetStrData() << endl;

	return 0;
}