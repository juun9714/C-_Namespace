/*
<const의 쓰임새>
- 실수를 방지하기 위해 사용하는 기능
1. 매개변수의 상수화 (for 모든 함수)
2. 메서드의 상수화 (for 멤버 메서드)
*/

#include <iostream>
using namespace std;

class Account {
public:
	Account():money(0){}
	Account(int money):money(money){}

	void Deposit(const int d) {
		//이 함수 안에서 매개변수인 d의 값이 변하는 경우(실수)를 방지 -> 매개변수의 상수화 기능
		//d = money;
		money += d;
		//예금
		cout << d << "원을 예금했다." << endl;
	}

	void Draw(const int d) {
		if (money >= d) {
			money -= d;
			cout << d << "원을 인출했다." << endl;
		}
	}

	int viewMoney() const{
		//이 메서드의 경우 멤버변수를 단순히 반환하는 역할이고, 멤버 변수를 조작하지는 않는다. -> const 메서드로 만들어버리면 멤버변수(money) 조작시 에러가 뜬다. 
		//money++;
		return money;
	}

	//const int viewMoney() :viewMoney라는 함수의 리턴값이 const가 된다. 사실 return 값을 조작하는 일은 거의 없기 때문에 의미가 없긴 함.

private:
	int money;
};



int main() {
	Account june(200);
	june.Deposit(100);
	june.Draw(20);
	cout << june.viewMoney() <<"원이 잔액이다."<< endl;
	return 0;

}