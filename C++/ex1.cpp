#include <iostream>
using namespace std;

class Time {
public:
	//생성자 위임 : 이미 구현되어있는 부분은 만들어 놓은 것을 활용 -> 유지보수에도 좋다. 
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
생성자 : 객체가 생성될 때 자동으로 호출되는 함수 
-> 멤버변수를 초기화하기에 좋다. 
소멸자 : 객체가 소멸될 때 자동으로 호출되는 함수
-> 메모리 해제시 잘 쓰인다. 

복소수 (real, imag이라는 두 파트로 나뉘어져 있다.)


class Complex {
public:
	Complex() : real(0), imag(0){}
	Complex(double real_, double imag_) : real(real_),imag(imag_){}
	//초기화 목록으로 사용할 때는 매개변수와 멤버변수가 이름이 같아도 프로그램 스스로 구분한다.
	//기존처럼 함수와 동일한 형태로 사용할 때에는 매개변수와 멤버변수가 이름이 같으면 모두 매개로 인식했다.

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
		//반환형이 없음 -> 생성자
		cout << "생성자가 호출되었다." << endl;
	}

	~MyClass() {
		//소멸자
		cout << "소멸자가 호출되었다." << endl;
	}

	//생성자와 소멸자를 선언해주지 않으면 default 생성자와 소멸자가 만들어진다.
	//내부에 아무것도 없다.
};

*/
int main() {
	/*
	Complex c1;//이렇게 선언하면 매개변수가 없는 생성자가 호출된다.
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

