#include <iostream>
using namespace std;

/*
���� �Ҵ�
-> �޸𸮸� ���������� �Ҵ��Ѵ�.
-> ������ ������ �Ҹ�� �����ϰ� ���������� �Ҹ������ ���α׷��Ӱ� ���� �� �ִ� ��
���� �Ҵ�
int a;
-> �ش� ������ ���۵ɶ� �����ǰ�, ����Ǹ� �ڵ����� �Ҹ�ȴ�.


�ַ� �迭�� ����� ��, �޸𸮸� �����ϰ� ����� �� �ְ� �ȴ�. 
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
	//new : ������ : ������ �޸��� �ּҰ��� ��ȯ�Ѵ�. 
	//�׷��� ������ ��ȯ�� �ּҰ��� �����ϱ� ���� ������ ������ ��ȯ���� �����ؾ��Ѵ�.
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
	cout << "���� �Ҵ��� �迭�� ���̸� �Է� : ";
	cin >> len;

	arr = new int[len];
	//new �迭[0]�� �ּҰ��� ��ȯ
	for (int i = 0; i < len; i++)
		arr[i] = len - i;
	for (int i = 0; i < len; i++)
		cout << arr[i] << endl;

	delete[] arr;
	//[]�� �߰����� ������ arr[0]�� �޸𸮸� �����ȴ�.
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