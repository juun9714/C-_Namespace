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
���
�θ� �ڽĿ��� �����ִ� �� 

�θ� ���� �� -> ��� �޼���, ��� ���� 
�ڽĿ��� �θ� ���� ����� �Ȱ��� ������ ���ִ� ���� 

�ڽ��� �� �ڱ⸸�� ������ ����� ���� �� ����

�ڽ� Ŭ������ �θ�Ŭ������ ������ �Ǵ� ����

�� ? 
-> ���ڿ� �Ѱ��� ���踦 �����غ��� ����. 

*/

/*
��������
1. private 
: �ܺ� ���� �Ұ�
: �ڽ� Ŭ������ ���� �Ұ�, ����� ������
2. public 
: �ܺ� ���� ����
: �ڽ� Ŭ������ ���� ����
3. protected
: �ܺ� ���� �Ұ� 
: �ڽ� Ŭ�������� ���� ����
: �ܺθ��� �ڱ� �ڽĵ鿡�Ը� ���� ��� 


*/