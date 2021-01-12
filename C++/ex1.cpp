#include <iostream>

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void swap(double& da, double& db) {
	double tmp = da;
	da = db;
	db = tmp;
}

void swap(int* (&pa), int* (&pb)) {
	int* tmp = pa;
	pa = pb;
	pb = tmp;
}

int inven[64] = { 0 };
//inven[0] = 2 --> 0�̶�� item�� 2�� �ִ�
int score = 0;

void getItem(int itemId, int cnt=1, int sc=0) {
	inven[itemId] += cnt;
	score += sc;
	//default �Ű������� ���ؼ� ���� overload 3���� �����ؾ� �ߴ� ���� �ϳ��� ����
}


int main() {
	/*
	�Լ� overload = ���� ����
	

	int a = 20, b = 30;
	double da = 2.22, db = 3.33;
	int* pa = &a, * pb = &b;
	swap(a, b);
	swap(da, db);
	swap(pa, pb);
	//3�� swap �Լ��� �̸��� ��� ���Ƶ� �Ű������� �ٸ��� ������ �����Ϸ��� �˾Ƽ�
	//�ٸ� �Լ��� �ν��Ѵ�.

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;

	std::cout << "da : " << da << std::endl;
	std::cout << "db : " << db << std::endl;

	std::cout << "*pa : " << *pa << std::endl;
	std::cout << "*pb : " << *pb << std::endl;
	*/

	getItem(6, 5);
	getItem(3, 2);
	getItem(3);
	getItem(11, 34, 7000);

	for (int i = 0; i < 16; i++)
		std::cout << inven[i] << ' ';
	std::cout << score << std::endl;
	return 0;
}