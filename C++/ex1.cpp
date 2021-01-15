/*
연산자 오버로딩 62강
 - 벡터를 사용한다. 61강
 - 멤버 메서드를 사용한다. 61강 
 
 <벡터>
 실수 : float, double 등을 사용한다. 
 벡터 : 실수 두개를 묶어 (2, 3) 와 (-1, 7): 두 개의 벡터를 더한다면 (1, 10)이라는 벡터가 나온다. 
 
 실수 * 벡터도 가능
 3 * (1, 5) = (3, 15)

 벡터 * 벡터 
 두 가지가 있다.

 1. 내적 = dot곱 = dot으로 표현
	(2, 3) 와 (-1, 7)를 내적으로 곱한다면, (2*-1)+(3*7)의 결과인 19가 답이 된다. 
 2. 외적 = 곱하기로 표현
 

 <멤버 메서드>
 멤버 메서드의 선언과 정의를 분리하기
 멤버 함수의 경우는 대부분 선언과 정의를 분리한다. 
 왜냐면 내 위에서 선언된 함수만 내 함수 내에서 사용할 수 있기 때문에 소스코드 맨 위에서 선언을 모두 해놓고, 
 정의를 아래서 따로 해야 참조할 수 있다. 

 클래스는 때때로 namespace와 같게 작동한다. 
 --> 클래스 내의 멤버 메서드의 정의를 따로 뺄때도 namespace와 동일하게 가능?

 */

#include <iostream>
using namespace std;

class Vector2 {
public:
	Vector2();
	Vector2(float x, float y);

	float GetX() const;
	float GetY() const;
	//<멤버연산자들> -> 자기 자신이 하나의 재료로 이미 존재 + 우변만 받아주면 됨
	Vector2 operator+(const Vector2 rhs) const;
	Vector2 operator-(const Vector2 rhs) const;
	Vector2 operator*(const float rhs) const; //실수*벡터
	float operator*(const Vector2 rhs) const; //벡터*벡터
	Vector2 operator/(const float rhs) const; // 벡터/실수 (가능, 역수의 곱과 다를 바 없음) < - > 벡터/벡터(불가)

private:
	float x;
	float y;
	//이런 클래스의 경우 값을 변경하기보단, 그냥 해당 값을 갖는 새로운 객체 하나를 생성해버리는게 낫다. 
	//-> set함수 안만들거임
};

//<비-멤버 연산자> -> 자기 자신 객체라는 것이 없기 때문에 좌우변 모두 입력을 받아야 한다 .
Vector2 operator*(const float a, const Vector2 b) {
	//실수 * 벡터 연산(position matters)
	return Vector2(a*b.GetX(), a*b.GetY());
}



int main() {
	Vector2 a(2, 3);
	Vector2 b(-1, 4);
	Vector2 c1 = a-b;
	Vector2 c2 = a * 1.6;
	//=Vector2 c2 = a.operator*(1.6);
	//!= Vector2 c2 = (1.6).operator*(a); <- 비멤버연산자를 만든다고 해도, 1.6은 객체가 아니기 때문에 이렇게는 절대 못적어
	Vector2 c3 = 1.6 * a;
	float c4 = a * b;
	//+는 연산자지만 메소드와 비슷한 역할도 하고 있다. 
	cout << a.GetX() << ", " << a.GetY() << endl;
	cout << b.GetX() << ", " << b.GetY() << endl;
	cout << c1.GetX() << ", " << c1.GetY() << endl;
	cout << c2.GetX() << ", " << c2.GetY() << endl;
	cout << c3.GetX() << ", " << c3.GetY() << endl;
	cout << c4 <<endl;
	return 0;
}

//멤버 메서드 정의 분리 
Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}

float Vector2::GetX() const { return x; }
float Vector2::GetY() const { return y; }

Vector2 Vector2::operator+(const Vector2 rhs) const {
	//operator : 예약어
	//right hand side, 동적 메서드 
	return Vector2(x + rhs.x, y + rhs.y);
	//현재 이 메서드가 포함되어 있는 객체의 x,y와 전달받은 rhs의 x,y를 가지고 연산 
}
Vector2 Vector2::operator-(const Vector2 rhs) const {
	return Vector2(x - rhs.x, y - rhs.y);
}
Vector2 Vector2::operator*(const float rhs) const {
	//실수*벡터
	return Vector2(x * rhs, y * rhs);
}
float Vector2::operator*(const Vector2 rhs) const {
	//벡터*벡터
	return (x * rhs.x) + (y * rhs.y);
}
Vector2 Vector2::operator/(const float rhs) const {
	// 벡터/실수 (가능, 역수의 곱과 다를 바 없음) < - > 벡터/벡터(불가)
	return Vector2(x / rhs, y / rhs);
}
