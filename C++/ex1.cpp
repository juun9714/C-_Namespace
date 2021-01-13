#include <iostream>
using namespace std;

/*
������ : ��ü�� ������ �� �ڵ����� ȣ��Ǵ� �Լ� 
-> ��������� �ʱ�ȭ�ϱ⿡ ����. 
�Ҹ��� : ��ü�� �Ҹ�� �� �ڵ����� ȣ��Ǵ� �Լ�
-> �޸� ������ �� ���δ�. 

���Ҽ� (real, imag�̶�� �� ��Ʈ�� �������� �ִ�.)
*/

class Complex {

public:
	Complex() {
		real = 0;
		imag = 0;
		cout << "������1" << endl;
	}

	Complex(double real_, double imag_) {
		real = real_;
		imag = imag_;
		cout << "������2" << endl;
	}

	double GetReal() {
		return real;
	}
	void SetReal(double real_) {
		real = real_;
	}
	double GetImag() {
		return imag;
	}
	void SetImag(double imag_) {
		real = imag_;
	}

private:
	double real;
	double imag;
};


class MyClass {
public:
	MyClass() {
		//��ȯ���� ���� -> ������
		cout << "�����ڰ� ȣ��Ǿ���." << endl;
	}

	~MyClass() {
		//�Ҹ���
		cout << "�Ҹ��ڰ� ȣ��Ǿ���." << endl;
	}

	//�����ڿ� �Ҹ��ڸ� ���������� ������ default �����ڿ� �Ҹ��ڰ� ���������.
	//���ο� �ƹ��͵� ����.
};

//MyClass globalObj;

void testLocalObj() {
	cout << "testLocalObj() �Լ� ���� " << endl;
	MyClass localObj;
	cout << "testLocalObj() �Լ� �� " << endl;
	//localObj�� �Ҹ��ڴ� �ش� ��ü�� �Ҽӵ� testLocalObj��� �Լ��� ����� ���� ȣ��ȴ�. 
}

int main() {
	/*
	cout << "main �Լ� ����" << endl;
	testLocalObj();
	cout << "main �Լ� ��" << endl;
	*/
	Complex c1;//�̷��� �����ϸ� �Ű������� ���� �����ڰ� ȣ��ȴ�.
	Complex c2 = Complex(2.0, 3.0);
	Complex c3(2.0, 3.0);
	Complex c4 = { 3,4 };
	Complex c5 = Complex{ 4,5 };
	Complex c6{ 5,6 };
	cout << c1.GetReal() <<' '<< c1.GetImag() << endl;
	cout << c2.GetReal() << ' ' << c2.GetImag() << endl;
	cout << c3.GetReal() << ' ' << c3.GetImag() << endl;
	cout << c4.GetReal() << ' ' << c4.GetImag() << endl;
	cout << c5.GetReal() << ' ' << c5.GetImag() << endl;
	cout << c6.GetReal() << ' ' << c6.GetImag() << endl;
	return 0;
}

//�츮�� ��ü�� �������� �������� -> main�Լ� ���� ���� �����ڰ� ȣ��ȴ�. 
//�ش� ��ü�� �Ҽӵ� ����(�� ��� ����)�� ������ �Ҹ��ڰ� ȣ��ȴ�.