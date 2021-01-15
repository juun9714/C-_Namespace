#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class String {
public:
	String() {
		cout << "String() ������ ȣ��" << endl;
		strData = NULL;
		len = 0;
	}

	String(const char* str) {
		cout << "String(const char* str) ������ ȣ��" << endl;
		len = strlen(str);
		strData = new char[len+1];//NULL�� ���� +1
		cout << "strData �Ҵ� : "<<(void *)strData<< endl;
		strcpy(strData, str);//���� ����
		//iostream�� ���ԵǾ� ����
	}

	String(const String& rhs) {
		//����������� ��� class�� ���Ǿȿ��� �ش� class�� �Ű������� ���°� �Ұ�(String(String rhs)), 
		//�ٸ� �����ڳ� ��� �޼��忡���� ����
		cout << "String(String& rhs) ������ ȣ��" << endl;

		strData = new char[rhs.len + 1];//NULL�� ���� +1
		cout << "strData �Ҵ� : " << (void*)strData << endl;
		strcpy(strData, rhs.strData);//���� ����
		len = rhs.len;
	}

	~String(){
		//�޸� ����
		cout << "~String() �Ҹ��� ȣ��" << endl;
		delete[] strData;
		cout << "strData ������ : " <<(void*)strData<< endl;
		strData = NULL;
		//������ �޸𸮿� ������ ���� ���� NULL �Ҵ�
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
	String s1("�ȳ�");
	String s2(s1);//���� ������ 
	String s3;

	/*
	���� ������
	: ����Ǵ� ��ü�� ���� �ڷ����� ��ü�� �μ��� �����ϴ� ������
	: �μ��� ������(������ ���ǽ� &)�� ����
	: ���޵Ǵ� �μ��� �밳 const ����
	-> default�� ���ǵǴ� ��������ڰ� ������, ������ ������ ��� ���� ���簡 �̷������ ��. 
	-> �׷��� ������ �����ͺ��縦 �ؾ��ϴ� ��� ���� �����ڸ� ����, �������־�� �Ѵ�. 
	*/

	cout << s1.GetStrData() << endl;
	cout << s2.GetStrData() << endl;

	return 0;
}