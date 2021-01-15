#include <iostream>
using namespace std;

class String {
public:
	String() {
		strData = NULL;
		len = 0;
	}

	String(const char* str) {
		len = strlen(str);
		strData = new char[len+1];//NULL을 위한 +1
		strcpy(strData, str);//깊은 복사
		//iostream에 포함되어 있음
	}

	~String(){
		//메모리 해제
		delete[] strData;
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
	/*
	int* a = new int(5);
	int* b = new int(3);

	a = b; //얕은 복사
	*a = *b; //깊은 복사

	delete a;
	delete b;
	*/

	String s;



	return 0;
}