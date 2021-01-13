#include <iostream>
using namespace std;

class Time {
public:
	//������ ���� : �̹� �����Ǿ��ִ� �κ��� ����� ���� ���� Ȱ�� -> ������������ ����. 
	Time() : h(0),m(0),s(0) {}
	Time(int s_) : Time(){
		s = s_;
	}
	Time(int m_,int s_) : Time(s_){
		m = m_;
	}
	Time(int h_,int m_, int s_) : Time(m_,s_){
		h = h_;
	}
	int h;
	int m;
	int s;
};

/*
������ : ��ü�� ������ �� �ڵ����� ȣ��Ǵ� �Լ� 
-> ��������� �ʱ�ȭ�ϱ⿡ ����. 
�Ҹ��� : ��ü�� �Ҹ�� �� �ڵ����� ȣ��Ǵ� �Լ�
-> �޸� ������ �� ���δ�. 

���Ҽ� (real, imag�̶�� �� ��Ʈ�� �������� �ִ�.)


class Complex {
public:
	Complex() : real(0), imag(0){}
	Complex(double real_, double imag_) : real(real_),imag(imag_){}
	//�ʱ�ȭ ������� ����� ���� �Ű������� ��������� �̸��� ���Ƶ� ���α׷� ������ �����Ѵ�.
	//����ó�� �Լ��� ������ ���·� ����� ������ �Ű������� ��������� �̸��� ������ ��� �Ű��� �ν��ߴ�.

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

*/
int main() {
	/*
	Complex c1;//�̷��� �����ϸ� �Ű������� ���� �����ڰ� ȣ��ȴ�.
	Complex c2 = Complex(2.0,3.0);
	Complex c3(2.0, 3.0);
	
	cout <<"c1 "<< c1.GetReal() <<' '<< c1.GetImag() << endl;
	cout <<"c2 "<< c2.GetReal() << ' ' << c2.GetImag() << endl;
	cout <<"c3 "<< c3.GetReal() << ' ' << c3.GetImag() << endl;
	*/

	Time t1;
	Time t2(5);
	Time t3(3, 16);
	Time t4(2, 42, 15);

	cout << "t1 : " << t1.h << ":" << t1.m << ":" << t1.s << " " << endl;
	cout << "t2 : " << t2.h << ":" << t2.m << ":" << t2.s << " " << endl;
	cout << "t3 : " << t3.h << ":" << t3.m << ":" << t3.s << " " << endl;
	cout << "t4 : " << t4.h << ":" << t4.m << ":" << t4.s << " " << endl;
	return 0;
}

