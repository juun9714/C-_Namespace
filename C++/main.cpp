#include  <iostream>

namespace a {
	int n;
}

namespace b {
	int n;
}


int main() {
	//�̸� �� : std = ��
	a::n = 10;
	b::n = 20;
	std::cout <<"Hell World "<< a::n <<' '<< b::n<< std::endl;
	//<< shift ���� -> ����� ���ڸ� �и����ִ� �뵵 !
	//endl : �ٹٲ�
	return 0;
}