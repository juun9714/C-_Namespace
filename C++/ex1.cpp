#include <iostream>

using namespace std;

int idCounter = 1;
//������ ������ �ؾ������� class Color�� ������ ������ �ִ� ���� -> ���� ��� !

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
		//�� MixColors��� ��� �޼���� �ƹ��� ��ü�� ���� �ϳ��ۿ� ���� ���̴�. 
	}

	static int idCounter;
	//��ü���� �����ϴ�. ������ �ȿ��� �ʱⰪ�� ������ �� ����
private:
	float r;
	float g;
	float b;

	int id;
};

int Color::idCounter = 1; //����� ���Ǹ� �и��ؼ� ����� �Ѵ�. 

/*
���� 
1. ū ���α׷��� ��� �� Ŭ�������� counter������ �ϴ� ���������� ��û ���� ���̴�. �� ������������ ��ĥ �� ���� -> Ư�� Ŭ������ ���õ� �������� ������ �ϴ� ���� : �����������, �Լ��� Ȱ��  
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