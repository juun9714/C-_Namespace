#include <iostream>
using namespace std;

/*
동적 할당
-> 메모리를 유동적으로 할당한다.
-> 범위의 생성과 소멸과 무관하게 생성시점과 소멸시점을 프로그래머가 정할 수 있는 것
정적 할당
int a;
-> 해당 범위가 시작될때 생성되고, 종료되면 자동으로 소멸된다.


주로 배열을 사용할 때, 메모리를 유용하게 운용할 수 있게 된다. 
*/

class Vector2 {
public:
	Vector2():x(0),y(0){
		cout << this << " : Vector2()" << endl;
	}

	Vector2(const float x, const float y) :x(x), y(y) {
		cout << this << " : Vector2(const float x, const float y)" << endl;
	}

	~Vector2() {
		cout << this << " : ~Vector2()" << endl;
	}

	float GetX() const { return x; }
	float GetY() const { return y; }

private:
	float x;
	float y;
};

int main() {
	/*
	int *a=new int(5);
	//new : 연산자 : 생성한 메모리의 주소값을 반환한다. 
	//그렇기 때문에 반환된 주소값을 저장하기 위한 포인터 변수에 반환값을 저장해야한다.
	cout << a << endl;
	cout << *a << endl;

	*a = 10;
	cout << a << endl;
	cout << *a << endl;

	delete a;
	*/
	/*
	int* arr;
	int len;
	cout << "동적 할당할 배열의 길이를 입력 : ";
	cin >> len;

	arr = new int[len];
	//new 배열[0]의 주소값을 반환
	for (int i = 0; i < len; i++)
		arr[i] = len - i;
	for (int i = 0; i < len; i++)
		cout << arr[i] << endl;

	delete[] arr;
	//[]을 추가하지 않으면 arr[0]의 메모리만 해제된다.
	*/
	
	
	Vector2 s1 = Vector2();
	Vector2 s2 = Vector2(3, 2);

	Vector2* d1 = new Vector2();
	Vector2* d2 = new Vector2(3,2);

	cout << "(" << d1->GetX() << ", " << d1->GetY() << endl;
	cout << "(" << d2->GetX() << ", " << d2->GetY() << endl;

	delete d1;
	delete d2;
	
	return 0;
}