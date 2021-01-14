/*
static : 정적 <-> 동적

<동적 멤버>
객체에 포함이 되어 있다(?
클래스로 찍어낸 각 객체(붕어빵)마다 팥, 슈크림이 다른 것임 (각 멤버의 값이 달라)

<정적 멤버>
붕어빵에 해당되는 멤버가 아니라, 붕어빵 틀에 해당되는 멤버들 
*/

#include <iostream>

using namespace std;

/*
RGB
0~1 사이의 값을 갖는 float
*/

class Color {
public:
	Color() :r(0), g(0), b(0){}
	Color(float r, float g, float b):r(r), g(g), b(b) {}

	float getR() { return r; }
	float getG() { return g; }
	float getB() { return b; }

	static Color MixColors(Color a, Color b) {
		/*
		생성자를 바로 호출
		Color result((a.getR()+b.getR())/2, (a.getG() + b.getG()) / 2, (a.getB() + b.getB()) / 2);
		return result;
		*/

		return Color((a.getR() + b.getR()) / 2, (a.getG() + b.getG()) / 2, (a.getB() + b.getB()) / 2);
		//위의 주석과 동일 
	}
	//MixColors라는 함수를 class안에 넣고 싶은데, static 없이 넣으면 main에서 MixColors를 호출할 때, 소속을 밝혀줘야하는데 어느 소속인지 애매해진다. 
	//이럴때 static을 붙여주면 main에서 호출할 때, namespace처럼 Color::MixColors로 쓸 수 있다. 
	//또한 class 안에 멤버함수로 넣으면 class의 private 멤버에 직접 접근할 수 있다. -> getR,G,B를 안써도 됨


private:
	float r;
	float g;
	float b;
};



int main() {
	Color blue(0, 0, 1);
	Color red(1, 0, 0);
	
	Color purple = Color::MixColors(blue, red);

	cout << "r=" << purple.getR() << ", g=" << purple.getG() << ", b=" << purple.getB() << endl;
	return 0;
}