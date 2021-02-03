#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Point {
private:
	int xpos, ypos;
public:
	void Init(int x, int y) {
		xpos = x;
		ypos = y;
	}
	void ShowPointInfo() const {
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

class Circle {
private:
	Point center;
	int radius;
public:
	void Init(int x,int y, int radius_) {
		center.Init(x, y);
		radius = radius_;
	}
	void ShowCircleInfo() const {
		cout << "radius: " << radius << endl;
		center.ShowPointInfo();
	}
};

class Ring {
private:
	Circle inner;
	Circle outer;
public:
	void Init(int in_x, int in_y, int in_ra, int out_x, int out_y, int out_ra) {
		inner.Init(in_x, in_y, in_ra);
		outer.Init(out_x, out_y, out_ra);
	}

	void ShowRingInfo() {
		cout << "Inner Circle Info..." << endl;
		inner.ShowCircleInfo();
		cout << "Outer Circle Info..." << endl;
		outer.ShowCircleInfo();
	}
};

int main() {
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	
	return 0;
}
