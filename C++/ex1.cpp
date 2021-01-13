#include <iostream>
using namespace std;

//TV를 만들어보자

struct TV {
private:
	bool powerOn;
	int channel;
	int volume;

public:
	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
			cout << "Volume은 " << vol << "입니다." << endl;
		}
		
		/*
		volume이 0~100 이외의 값이 저장되는 것을 방지 
		근데 어떤 프로그래머가 또 lg.volume=11350 이라고 프로그램을 짜면 안돼. 
		해당 struct안에서만(main함수에서는 접근 불가) volume변수에 접근할 수 있도록 하는 방법이 없을까? 
		접근제어 지시자가 등장 (private, protected, public)
		*/
	}

	void on() {
		powerOn = true;
		cout << "TV를 켰습니다." << endl;
	}

	void off() {
		powerOn = false;
		cout << "TV를 껐습니다." << endl;
	}

	void setChannel(int cnl) {
		if (cnl >= 1 && cnl <= 100) {
			channel = cnl;
			cout << "Channel은 " << cnl << "입니다." << endl;
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
