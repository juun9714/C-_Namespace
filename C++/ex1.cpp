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
	char* name;
	char* company;
	char* phone;
	int stage;
public:
	NameCard(const char* name_, const char* company_, const char* phone_, const int stage_):stage(stage_) {
		name = new char[strlen(name_) + 1];
		company = new char[strlen(company_) + 1];
		phone = new char[strlen(phone_) + 1];

		strcpy(name, name_);
		strcpy(company, company_);
		strcpy(phone, phone_);
	}

	void ShowNameCardInfo() {
		cout << "�̸�: " << name << endl;
		cout << "ȸ��: " << company << endl;
		cout << "��ȭ��ȣ: " << phone << endl;
		cout << "����: ";
		COMP_POS::showStage(stage);
		cout << endl;
	}

	~NameCard() {
		delete[] name;
		delete[] company;
		delete[] phone;
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
