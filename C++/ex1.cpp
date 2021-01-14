/*
static : ���� <-> ����

<���� ���>
��ü�� ������ �Ǿ� �ִ�(?
Ŭ������ �� �� ��ü(�ؾ)���� ��, ��ũ���� �ٸ� ���� (�� ����� ���� �޶�)

<���� ���>
�ؾ�� �ش�Ǵ� ����� �ƴ϶�, �ؾ Ʋ�� �ش�Ǵ� ����� 
*/

#include <iostream>

using namespace std;

/*
RGB
0~1 ������ ���� ���� float
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
		�����ڸ� �ٷ� ȣ��
		Color result((a.getR()+b.getR())/2, (a.getG() + b.getG()) / 2, (a.getB() + b.getB()) / 2);
		return result;
		*/

		return Color((a.getR() + b.getR()) / 2, (a.getG() + b.getG()) / 2, (a.getB() + b.getB()) / 2);
		//���� �ּ��� ���� 
	}
	//MixColors��� �Լ��� class�ȿ� �ְ� ������, static ���� ������ main���� MixColors�� ȣ���� ��, �Ҽ��� ��������ϴµ� ��� �Ҽ����� �ָ�������. 
	//�̷��� static�� �ٿ��ָ� main���� ȣ���� ��, namespaceó�� Color::MixColors�� �� �� �ִ�. 
	//���� class �ȿ� ����Լ��� ������ class�� private ����� ���� ������ �� �ִ�. -> getR,G,B�� �Ƚᵵ ��


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