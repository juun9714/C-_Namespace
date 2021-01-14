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
	//이런 클래스의 경우 값을 변경하기보단, 그냥 해당 값을 갖는 새로운 객체 하나를 생성해버리는게 낫다. -> set함수 안만들거임
};



int main() {
	return 0;
}


Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}
float Vector2::GetX() const { return x; }
float Vector2::GetY() const { return y; }