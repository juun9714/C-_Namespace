#include <iostream>
using namespace std;

class GameWindow {
public:
	GameWindow();
	GameWindow(const int, const int);
	//생성자 자체에는 const 안된다.

	int GetWidth() const;
	int GetHeight() const;
	void ResizeWindow(const int w, const int h);
	//ResizeWindow는 const안된다. 멤버변수를 조작하기 때문

private:
	int width;
	int height;
};

GameWindow::GameWindow() :width(800), height(600) {}
GameWindow::GameWindow(const int w, const int h) {
	ResizeWindow(w, h);
	//ResizeWindow의 코드를 재사용 -> 유지보수가 쉽다.
}
int GameWindow::GetWidth() const {return width;}
int GameWindow::GetHeight() const  {return height;}
void GameWindow::ResizeWindow (const int w, const int h) {
	if (w < 800)
		width = 800;
	else
		width = w;

	if (h < 600)
		height = 600;
	else
		height = h;
}


int main() {
	GameWindow mainWindow(1,1);
	cout << mainWindow.GetWidth() << "x" << mainWindow.GetHeight() << endl;
	mainWindow.ResizeWindow(1366, 768);
	cout << mainWindow.GetWidth() << "x" << mainWindow.GetHeight() << endl;
	mainWindow.ResizeWindow(1, 1);
	cout << mainWindow.GetWidth() << "x" << mainWindow.GetHeight() << endl;
	return 0;
}