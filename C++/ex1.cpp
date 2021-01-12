#include <iostream>

int n;
void set() {
	n = 10;
}

namespace doodle {
	
	void set();

	namespace google {
		void set();
		int n;
		//�̷��� google�� n�� google�� set���� �ڿ� ����Ǿ� ������ ������ �ڱⲨ�� ���ϰ�, 
		//�ڱ� �ۿ� �ִ� ���� �����ϰ� �ȴ�.
	}
	int n;
}


int main() {
	using namespace std;

	using namespace doodle;
	::set();
	doodle::set();
	google::set();

	cout << ::n << endl;
	cout << doodle::n << endl;
	cout << doodle::google::n << endl;
	
	return 0;
}

void doodle::google::set() {
	n = 30;
}

void doodle::set() {
	n = 20;
}

