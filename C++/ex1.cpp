#include <iostream>

using namespace std;
void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int main() {
	/*
	int a = 10; 초기화, 아래와 동일하다.
	int x(10); 이렇게 초기화 가능, 대입은 불가 
	*/
	int x(10);
	int y(x);

	//cout << "x = " << x << endl;
	//cout << "y+5 = " << y+5 << endl;


	
	//범위기반 for문
	

	int arr[10] = { 3,1,4,1,5,9,2,6,5,3 };

	for (int &n :arr) {
		//n을 reference 변수로 선언했기 때문에 
		//int &n=arr[6] 과 같고, n이 바뀌면 arr[6]도 바뀐다.
		//그래서 두번째 for문에서 arr배열의 모든 값들이 1씩 증가된 채로 출력되게 된다. 
		cout << n << ' ';
		n++;
	}
	cout << endl;
	for (int n : arr) {
		cout << n << ' ';
	}
	

	/*
	reference 변수

	*/

	/* r-value(수정 불가), l-value(수정 가능)
	int a(5), b(7);
	int&& r1 = a;
	int&& r2 = 3;//상수는 메모리에 존재하지 않음(주소값이 존재하지 않음)
	int&& r3 = a * a;//이 또한 메모리에 존재하는 것이 아님(주소값이 존재하지 않음)
	swap(a, b);

	cout << a << endl;
	cout << b << endl;
	*/
	return 0;
}