#include <iostream>
using namespace std;

int main() {
	int arr[2][3] = { {1,2,3},{4,5,6} };

	for (int x : arr[0])
		cout << x << ' ';
	cout << endl;
	for (int y : arr[1])
		cout << y << ' ';
	cout << endl;

	///////////////////////
	
	for (int(&row)[3] : arr)
		for (int(&col) : row)
			cout << col << ' ';
	return 0;
}