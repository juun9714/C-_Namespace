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
//inven[0] = 2 --> 0이라는 item이 2개 있다
int score = 0;

void getItem(int itemId, int cnt=1, int sc=0) {
	inven[itemId] += cnt;
	score += sc;
	//default 매개변수를 통해서 각각 overload 3개로 구현해야 했던 것을 하나로 구현
}


int main() {
	/*
	함수 overload = 다중 정의
	

	int a = 20, b = 30;
	double da = 2.22, db = 3.33;
	int* pa = &a, * pb = &b;
	swap(a, b);
	swap(da, db);
	swap(pa, pb);
	//3개 swap 함수의 이름이 모두 같아도 매개변수가 다르기 때문에 컴파일러가 알아서
	//다른 함수로 인식한다.

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