#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>

using namespace std;
long long twototen(char* one) {
	long long ten = 0;
	for (int i = 0; i < strlen(one); i++) {
		if (one[i] == '0')
			continue;
		else if (one[i] == '1') 
			ten += pow(2.0, strlen(one) - 1 - i);
	}
	return ten;
}

int tentotwo(int* result,long long sum) {
	int i = 0;
	while (1) {
		if (sum / 2 == 0 && sum%2==0)
			break;
		result[i]=sum % 2;
		sum /= 2;
		//cout << "result[" << i << "] = " << result[i] << endl;
		//cout << "sum = " << sum << endl;
		i++;
	}
	return i;
}
int main() {
	string one;
	string two;
	int result[81] = { 0 };
	cin >> one;
	cin >> two;
	int up = 0, i=0;

	while (1) {
		if (!one.empty() && !two.empty()) {
			//둘다 alive
			if (up == 1) {
				if (one[one.size()-1] == '1' && two[two.size() - 1] == '1') {
					//one,two,up = 1,1,1
					//cout << "one two up = " << one << two << up << endl;
					result[i] = 1;
					up = 1;
				}
				else if (one[one.size() - 1] == '1' && two[two.size() - 1] == '0') {
					//cout << "one two up = " << one << two << up << endl;

					result[i] = 0;
					up = 1;
				}
				else if (one[one.size() - 1] == '0' && two[two.size() - 1] == '1') {
					//cout << "one two up = " << one << two << up << endl;

					result[i] = 0;
					up = 1;
				}
				else if (one[one.size() - 1] == '0' && two[two.size() - 1] == '0') {
					//cout << "one two up = " << one << two << up << endl;

					result[i] = 1;
					up = 0;
				}
			}
			else if (up == 0) {
				if (one[one.size() - 1] == '1' && two[two.size() - 1] == '1') {
					//one,two,up = 1,1,0
					//cout << "one two up = " << one << two << up << endl;

					result[i] = 0;
					up = 1; 
				}
				else if (one[one.size() - 1] == '1' && two[two.size() - 1] == '0') {
					//cout << "one two up = " << one << two << up << endl;

					result[i] = 1;
					up = 0;
				}
				else if (one[one.size() - 1] == '0' && two[two.size() - 1] == '1') {
					//cout << "one two up = " << one << two << up << endl;

					result[i] = 1;
					up = 0;
				}
				else if (one[one.size() - 1] == '0' && two[two.size() - 1] == '0') {
					//cout << "one two up = " << one << two << up << endl;

					result[i] = 0;
					up = 0;
				}
			}

			one.pop_back();
			two.pop_back();
			//cout << "both are alive one.size() = " << one.size()<<" and result["<<i<<"] is "<<result[i]<<endl;
			//cout << "two.size() = " << two.size() << endl;
		}

		else if (!one.empty() && two.empty()) {
			//one만 alive
			if (up == 1) {
				if (one[one.size() - 1] == '1') {
					//one,up = 1,1
					result[i] = 0;
					up = 1;
				}
				else if (one[one.size() - 1] == '0') {
					result[i] = 1;
					up = 0;
				}
			}
			else if (up == 0) {
				if (one[one.size() - 1] == '1') {
					//one,up = 1,0
					result[i] = 1;
					up = 0;
				}
				else if (one[one.size() - 1] == '0') {
					result[i] = 0;
					up = 0;
				}
			}

			one.pop_back();
			//cout << "only one is alive and one.size() = " << one.size() << endl;
		}
		else if (one.empty() && !two.empty()) {
			//two만 alive
			if (up == 1) {
				if (two[two.size() - 1] == '1') {
					//two,up = 1,1
					result[i] = 0;
					up = 1;
				}
				else if (two[two.size() - 1] == '0') {
					result[i] = 1;
					up = 0;
				}
			}
			else if (up == 0) {
				if (two[two.size() - 1] == '1') {
					//two,up = 1,0
					result[i] = 1;
					up = 0;
				}
				else if (two[two.size() - 1] == '0') {
					result[i] = 0;
					up = 0;
				}
			}

			two.pop_back();
			//cout << "only two is alive and two.size() = " << two.size() << endl;
		}
		else if (one.empty() && two.empty()){
			//둘다 죽음
			if (up == 1) 
				result[i] = 1;
			else 
				i--;
			break;
		}
		i++;
	}
	for (int j = i; j >= 0; j--) {
		if (result[i] == 0) {
			while (result[j]==0) {
				j--;
			}
		}
		if(j>=0)
			cout << result[j];
		if (j < 0)
			cout << 0;
	}
	return 0;
}
