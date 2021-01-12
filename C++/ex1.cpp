#include <iostream>

using namespace std;
void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int main() {
	/*
	int a = 10; �ʱ�ȭ, �Ʒ��� �����ϴ�.
	int x(10); �̷��� �ʱ�ȭ ����, ������ �Ұ� 
	*/
	int x(10);
	int y(x);

	//cout << "x = " << x << endl;
	//cout << "y+5 = " << y+5 << endl;


	
	//������� for��
	

	int arr[10] = { 3,1,4,1,5,9,2,6,5,3 };

	for (int &n :arr) {
		//n�� reference ������ �����߱� ������ 
		//int &n=arr[6] �� ����, n�� �ٲ�� arr[6]�� �ٲ��.
		//�׷��� �ι�° for������ arr�迭�� ��� ������ 1�� ������ ä�� ��µǰ� �ȴ�. 
		cout << n << ' ';
		n++;
	}
	cout << endl;
	for (int n : arr) {
		cout << n << ' ';
	}
	

	/*
	reference ����

	*/

	/* r-value(���� �Ұ�), l-value(���� ����)
	int a(5), b(7);
	int&& r1 = a;
	int&& r2 = 3;//����� �޸𸮿� �������� ����(�ּҰ��� �������� ����)
	int&& r3 = a * a;//�� ���� �޸𸮿� �����ϴ� ���� �ƴ�(�ּҰ��� �������� ����)
	swap(a, b);

	cout << a << endl;
	cout << b << endl;
	*/
	return 0;
}