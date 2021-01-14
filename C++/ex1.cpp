/*
<const�� ���ӻ�>
- �Ǽ��� �����ϱ� ���� ����ϴ� ���
1. �Ű������� ���ȭ (for ��� �Լ�)
2. �޼����� ���ȭ (for ��� �޼���)
*/

#include <iostream>
using namespace std;

class Account {
public:
	Account():money(0){}
	Account(int money):money(money){}

	void Deposit(const int d) {
		//�� �Լ� �ȿ��� �Ű������� d�� ���� ���ϴ� ���(�Ǽ�)�� ���� -> �Ű������� ���ȭ ���
		//d = money;
		money += d;
		//����
		cout << d << "���� �����ߴ�." << endl;
	}

	void Draw(const int d) {
		if (money >= d) {
			money -= d;
			cout << d << "���� �����ߴ�." << endl;
		}
	}

	int viewMoney() const{
		//�� �޼����� ��� ��������� �ܼ��� ��ȯ�ϴ� �����̰�, ��� ������ ���������� �ʴ´�. -> const �޼���� ���������� �������(money) ���۽� ������ ���. 
		//money++;
		return money;
	}

	//const int viewMoney() :viewMoney��� �Լ��� ���ϰ��� const�� �ȴ�. ��� return ���� �����ϴ� ���� ���� ���� ������ �ǹ̰� ���� ��.

private:
	int money;
};



int main() {
	Account june(200);
	june.Deposit(100);
	june.Draw(20);
	cout << june.viewMoney() <<"���� �ܾ��̴�."<< endl;
	return 0;

}