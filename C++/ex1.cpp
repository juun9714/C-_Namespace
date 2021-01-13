#include <iostream>
using namespace std;

//TV�� ������

struct TV {
private:
	bool powerOn;
	int channel;
	int volume;

public:
	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
			cout << "Volume�� " << vol << "�Դϴ�." << endl;
		}
		
		/*
		volume�� 0~100 �̿��� ���� ����Ǵ� ���� ���� 
		�ٵ� � ���α׷��Ӱ� �� lg.volume=11350 �̶�� ���α׷��� ¥�� �ȵ�. 
		�ش� struct�ȿ�����(main�Լ������� ���� �Ұ�) volume������ ������ �� �ֵ��� �ϴ� ����� ������? 
		�������� �����ڰ� ���� (private, protected, public)
		*/
	}

	void on() {
		powerOn = true;
		cout << "TV�� �׽��ϴ�." << endl;
	}

	void off() {
		powerOn = false;
		cout << "TV�� �����ϴ�." << endl;
	}

	void setChannel(int cnl) {
		if (cnl >= 1 && cnl <= 100) {
			channel = cnl;
			cout << "Channel�� " << cnl << "�Դϴ�." << endl;
		}
	}
};



int main() {
	
	TV lg;
	lg.on();
	lg.setChannel(10);
	lg.setChannel(-73);
	lg.setVolume(50);
	return 0;
}
