#include  <iostream>

namespace a {
	int n;
}

namespace b {
	int n;
}


int main() {
	//이름 성 : std = 성
	a::n = 10;
	b::n = 20;
	std::cout <<"Hell World "<< a::n <<' '<< b::n<< std::endl;
	//<< shift 연산 -> 출력할 인자를 분리해주는 용도 !
	//endl : 줄바꿈
	return 0;
}