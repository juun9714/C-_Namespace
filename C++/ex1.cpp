#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
namespace COMP_POS {
	enum {
		CLERK,
		SENIOR,
		ASSIST,
		MANAGER
	};

	void showStage(int pos) {
		switch (pos) {
		case 0:
			cout << "���"<<endl;
			break;
		case 1:
			cout << "����" << endl;
			break;
		case 2:
			cout << "�븮" << endl;
			break;
		case 3:
			cout << "����" << endl;
			break;
		}
	}
}

class NameCard {
private:
	string name;
	string company;
	string phone;
	int stage;
public:
	NameCard(string name_, string company_, string phone_, int stage_):name(name_),company(company_),phone(phone_),stage(stage_) 
	{
	}

	void ShowNameCardInfo() {
		cout << "�̸�: " << name << endl;
		cout << "ȸ��: " << company << endl;
		cout << "��ȭ��ȣ: " << phone << endl;
		cout << "����: ";
		COMP_POS::showStage(stage);
		cout << endl;
	}
};

int main() {
	NameCard manClerk("Lee", "ABCDEng", "010-1111-2222", COMP_POS::CLERK);
	manClerk.ShowNameCardInfo();
	NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	manSenior.ShowNameCardInfo();
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
	manAssist.ShowNameCardInfo();
	return 0;
}
