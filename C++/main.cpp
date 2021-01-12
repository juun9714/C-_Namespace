#include  <iostream>
#include <string>

using namespace std;
//std라는 이름 공간을 사용하겠다 -> 앞으로 std::cout이라고 각각 써주지 않아도 됨

int main() {
	/*
	int a, b;
	cin >> a >> b;
	//C언어와 달리 서식문자가 필요가 없음. 프로그램이 알아서 데이터 타입에 맞춰서 입력을 받는다. 
	cout << "a + b = "<<a + b << endl;
	*/
	//문자열 처리하기
	string str;
	//배열형태 아니니까 일반 변수처럼 다룰 수 있음 --> 변수 형태니까 길이를 정해놓지 않아도 됨
	//길이를 무한정으로 바꿀 수도 있음
	
	str = "Hell world";
	cout << str << endl;

	str = "Hell worldHell worldHell worldHell worldHell worldHell worldHell worldHell world";
	cout << str << endl;

	//C와 달리 문자열 붙이고 이러는게 쉬워짐
	//string이라는 데이터 타입을 사용했기 때문에 변수처럼 다룰 수 있게 됨

	string name;
	cout << "이름 입력" << endl;
	cin >> name;
	string message = "안녕하세요, " + name + "님 !\n";
	cout << message << endl;
	return 0;
}