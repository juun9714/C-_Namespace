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

 Vector2() : x(0), y(0) {}
	Vector2(float x, float y) : x(x),y(y){}

	float GetX() const { return x; }
	float GetY() const { return y; }
 */

#include <iostream>
using namespace std;

class Vector2 {
public:
	Vector2();
	Vector2(float x, float y);

	float GetX() const;
	float GetY() const;
private:
	float x;
	float y;
	//�̷� Ŭ������ ��� ���� �����ϱ⺸��, �׳� �ش� ���� ���� ���ο� ��ü �ϳ��� �����ع����°� ����. -> set�Լ� �ȸ������
};



int main() {
	return 0;
}


Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}
float Vector2::GetX() const { return x; }
float Vector2::GetY() const { return y; }