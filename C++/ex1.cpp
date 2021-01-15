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
		strData = new char[len+1];//NULL�� ���� +1
		strcpy(strData, str);//���� ����
		//iostream�� ���ԵǾ� ����
	}

	~String(){
		//�޸� ����
		delete[] strData;
	}

	char* GetStrData() const{
		return strData;
	}

	int GetLen() const{
		return len;
	}

private:
	char* strData;//�����Ҵ��� ���ڿ��� �ּҸ� ����?
	int len;
};


int main() {
	/*
	int* a = new int(5);
	int* b = new int(3);

	a = b; //���� ����
	*a = *b; //���� ����

	delete a;
	delete b;
	*/

	String s;



	return 0;
}