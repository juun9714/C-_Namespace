#include  <iostream>
#include <string>

using namespace std;
//std��� �̸� ������ ����ϰڴ� -> ������ std::cout�̶�� ���� ������ �ʾƵ� ��

int main() {
	/*
	int a, b;
	cin >> a >> b;
	//C���� �޸� ���Ĺ��ڰ� �ʿ䰡 ����. ���α׷��� �˾Ƽ� ������ Ÿ�Կ� ���缭 �Է��� �޴´�. 
	cout << "a + b = "<<a + b << endl;
	*/
	//���ڿ� ó���ϱ�
	string str;
	//�迭���� �ƴϴϱ� �Ϲ� ����ó�� �ٷ� �� ���� --> ���� ���´ϱ� ���̸� ���س��� �ʾƵ� ��
	//���̸� ���������� �ٲ� ���� ����
	
	str = "Hell world";
	cout << str << endl;

	str = "Hell worldHell worldHell worldHell worldHell worldHell worldHell worldHell world";
	cout << str << endl;

	//C�� �޸� ���ڿ� ���̰� �̷��°� ������
	//string�̶�� ������ Ÿ���� ����߱� ������ ����ó�� �ٷ� �� �ְ� ��

	string name;
	cout << "�̸� �Է�" << endl;
	cin >> name;
	string message = "�ȳ��ϼ���, " + name + "�� !\n";
	cout << message << endl;
	return 0;
}