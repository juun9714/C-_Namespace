#include <iostream>
using namespace std;

/*
생성자 : 객체가 생성될 때 자동으로 호출되는 함수 
-> 멤버변수를 초기화하기에 좋다. 
소멸자 : 객체가 소멸될 때 자동으로 호출되는 함수
-> 메모리 해제시 잘 쓰인다. 

복소수 (real, imag이라는 두 파트로 나뉘어져 있다.)
*/

class Complex {

public:
	Complex() {
		real = 0;
		imag = 0;
		cout << "생성자1" << endl;
	}

	Complex(double real_, double imag_) {
		real = real_;
		imag = imag_;
		cout << "생성자2" << endl;
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

//MyClass globalObj;

void testLocalObj() {
	cout << "testLocalObj() 함수 시작 " << endl;
	MyClass localObj;
	cout << "testLocalObj() 함수 끝 " << endl;
	//localObj의 소멸자는 해당 객체가 소속된 testLocalObj라는 함수가 종료된 직후 호출된다. 
}

int main() {
	/*
	cout << "main 함수 시작" << endl;
	testLocalObj();
	cout << "main 함수 끝" << endl;
	*/
	Complex c1;//이렇게 선언하면 매개변수가 없는 생성자가 호출된다.
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

//우리가 객체를 전역으로 선언했음 -> main함수 시작 전에 생성자가 호출된다. 
//해당 객체가 소속된 지역(이 경우 전역)이 끝나면 소멸자가 호출된다.