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
		//이렇게 google의 n이 google의 set보다 뒤에 선언되어 있으면 참조를 자기꺼를 안하고, 
		//자기 밖에 있는 것을 참조하게 된다.
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

