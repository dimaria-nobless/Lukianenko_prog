#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main(){
	bool a = true;
	bool b;
	int otv;
	srand(time(NULL));
	while (a){
		int q = rand() % 101;
		b = false;
		for (int i = 0; i < 5; i++) {
			cin >> otv;
			if (otv < q) cout << "�������� ����� ������ ��� ����" << endl;
			else if (otv > q) cout << "�������� ����� ������ ��� ����" << endl;
			else {
				cout << "you win!!!" << endl;
				b = true;
				break;
			}
		}
		if (!b) cout << "you luser, becouse right:" << q << endl;
		cout << "������ � ������? (1-��)" << endl;
		sin >> otv;
		a = otv == 1 ? true : false;
	}
	return 0;
}