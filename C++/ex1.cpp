/*
������ �����ε� 62��
 - ���͸� ����Ѵ�. 61��
 - ��� �޼��带 ����Ѵ�. 61�� 
 
 <����>
 �Ǽ� : float, double ���� ����Ѵ�. 
 ���� : �Ǽ� �ΰ��� ���� (2, 3) �� (-1, 7): �� ���� ���͸� ���Ѵٸ� (1, 10)�̶�� ���Ͱ� ���´�. 
 
 �Ǽ� * ���͵� ����
 3 * (1, 5) = (3, 15)

 ���� * ���� 
 �� ������ �ִ�.

 1. ���� = dot�� = dot���� ǥ��
	(2, 3) �� (-1, 7)�� �������� ���Ѵٸ�, (2*-1)+(3*7)�� ����� 19�� ���� �ȴ�. 
 2. ���� = ���ϱ�� ǥ��
 

 <��� �޼���>
 ��� �޼����� ����� ���Ǹ� �и��ϱ�
 ��� �Լ��� ���� ��κ� ����� ���Ǹ� �и��Ѵ�. 
 �ֳĸ� �� ������ ����� �Լ��� �� �Լ� ������ ����� �� �ֱ� ������ �ҽ��ڵ� �� ������ ������ ��� �س���, 
 ���Ǹ� �Ʒ��� ���� �ؾ� ������ �� �ִ�. 

 Ŭ������ ������ namespace�� ���� �۵��Ѵ�. 
 --> Ŭ���� ���� ��� �޼����� ���Ǹ� ���� ������ namespace�� �����ϰ� ����?

 */

#include <iostream>
using namespace std;

class Vector2 {
public:
	Vector2();
	Vector2(float x, float y);

	float GetX() const;
	float GetY() const;
	//<��������ڵ�> -> �ڱ� �ڽ��� �ϳ��� ���� �̹� ���� + �캯�� �޾��ָ� ��
	Vector2 operator+(const Vector2 rhs) const;
	Vector2 operator-(const Vector2 rhs) const;
	Vector2 operator*(const float rhs) const; //�Ǽ�*����
	float operator*(const Vector2 rhs) const; //����*����
	Vector2 operator/(const float rhs) const; // ����/�Ǽ� (����, ������ ���� �ٸ� �� ����) < - > ����/����(�Ұ�)

private:
	float x;
	float y;
	//�̷� Ŭ������ ��� ���� �����ϱ⺸��, �׳� �ش� ���� ���� ���ο� ��ü �ϳ��� �����ع����°� ����. 
	//-> set�Լ� �ȸ������
};

//<��-��� ������> -> �ڱ� �ڽ� ��ü��� ���� ���� ������ �¿캯 ��� �Է��� �޾ƾ� �Ѵ� .
Vector2 operator*(const float a, const Vector2 b) {
	//�Ǽ� * ���� ����(position matters)
	return Vector2(a*b.GetX(), a*b.GetY());
}



int main() {
	Vector2 a(2, 3);
	Vector2 b(-1, 4);
	Vector2 c1 = a-b;
	Vector2 c2 = a * 1.6;
	//=Vector2 c2 = a.operator*(1.6);
	//!= Vector2 c2 = (1.6).operator*(a); <- ���������ڸ� ����ٰ� �ص�, 1.6�� ��ü�� �ƴϱ� ������ �̷��Դ� ���� ������
	Vector2 c3 = 1.6 * a;
	float c4 = a * b;
	//+�� ���������� �޼ҵ�� ����� ���ҵ� �ϰ� �ִ�. 
	cout << a.GetX() << ", " << a.GetY() << endl;
	cout << b.GetX() << ", " << b.GetY() << endl;
	cout << c1.GetX() << ", " << c1.GetY() << endl;
	cout << c2.GetX() << ", " << c2.GetY() << endl;
	cout << c3.GetX() << ", " << c3.GetY() << endl;
	cout << c4 <<endl;
	return 0;
}

//��� �޼��� ���� �и� 
Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}

float Vector2::GetX() const { return x; }
float Vector2::GetY() const { return y; }

Vector2 Vector2::operator+(const Vector2 rhs) const {
	//operator : �����
	//right hand side, ���� �޼��� 
	return Vector2(x + rhs.x, y + rhs.y);
	//���� �� �޼��尡 ���ԵǾ� �ִ� ��ü�� x,y�� ���޹��� rhs�� x,y�� ������ ���� 
}
Vector2 Vector2::operator-(const Vector2 rhs) const {
	return Vector2(x - rhs.x, y - rhs.y);
}
Vector2 Vector2::operator*(const float rhs) const {
	//�Ǽ�*����
	return Vector2(x * rhs, y * rhs);
}
float Vector2::operator*(const Vector2 rhs) const {
	//����*����
	return (x * rhs.x) + (y * rhs.y);
}
Vector2 Vector2::operator/(const float rhs) const {
	// ����/�Ǽ� (����, ������ ���� �ٸ� �� ����) < - > ����/����(�Ұ�)
	return Vector2(x / rhs, y / rhs);
}
