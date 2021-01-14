#include <iostream>

using namespace std;

int idCounter = 1;
//전역의 역할을 해야하지만 class Color와 밀접한 관련이 있는 변수 -> 정적 멤버 !

class Color {
public:
	Color() :r(0), g(0), b(0),id(idCounter++){}
	Color(float r, float g, float b):r(r), g(g), b(b), id(idCounter++) {}

	float getR() { return r; }
	float getG() { return g; }
	float getB() { return b; }
	int getId() { return id; }

	static Color MixColors(Color a, Color b) {
		return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
		//이 MixColors라는 멤버 메서드는 아무리 객체를 찍어내도 하나밖에 없는 것이다. 
	}

	static int idCounter;
	//객체랑은 무관하다. 생성자 안에서 초기값을 설정할 수 없음
private:
	float r;
	float g;
	float b;

	int id;
};

int Color::idCounter = 1; //선언과 정의를 분리해서 해줘야 한다. 

/*
장점 
1. 큰 프로그램의 경우 각 클래스마다 counter역할을 하는 전역변수가 엄청 많을 것이다. 그 전역변수들이 겹칠 수 있음 -> 특정 클래스와 관련된 전역변수 역할을 하는 변수 : 정적멤버변수, 함수를 활용  
*/

int main() {
	Color red(1, 0, 0);
	Color blue(0, 0, 1);
	Color purple = Color::MixColors(blue, red);

	cout << "r=" << purple.getR() << ", g=" << purple.getG() << ", b=" << purple.getB() << endl;
	cout << "red.getId() = " << red.getId() << endl;
	cout << "blue.getId() = " << blue.getId() << endl;
	cout << "purple.getId() = " << purple.getId() << endl;
	return 0;
}