#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Base {
public:
	int bPublic;

protected:
	int bProtected;
	//protected�� �θ� �ڽ����� ������ ����� �����ϴ� ���̱� ������ �θ𿡼��� �������ָ� �ȴ�.
private:
	int bPrivate;
};
/*
��ӽ� ���� ���������� �ǹ�
-> ������ �����ں��� �� ���� ���������� ���� �ִ� ����� ������ ������ �������� ������. 
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
���
�θ� �ڽĿ��� �����ִ� �� 

�θ� ���� �� -> ��� �޼���, ��� ���� 
�ڽĿ��� �θ� ���� ����� �Ȱ��� ������ ���ִ� ���� 

�ڽ��� �� �ڱ⸸�� ������ ����� ���� �� ����

�ڽ� Ŭ������ �θ�Ŭ������ ������ �Ǵ� ����

�� ? 
-> ���ڿ� �Ѱ��� ���踦 �����غ��� ����. 


�θ�Ŭ�������� public���� ���ǵǾ� �ִ� ����� �ڽ� Ŭ���������� public���� �ν�
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