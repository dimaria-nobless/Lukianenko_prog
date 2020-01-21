#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	bool a = true;
	bool b;
	int otv;
	srand(time(NULL));
	while (a){
		int q = rand() % 101;
		b = false;
		for (int i = 0; i < 5; i++) {
			cin >> otv;
			if (otv < q) cout << "заданное число больше чем надо" << endl;
			else if (otv > q) cout << "заданное число меньше чем надо" << endl;
			else {
				cout << "you win!!!" << endl;
				b = true;
				break;
			}
		}
		if (!b) cout << "you luser, becouse right:" << q << endl;
		cout << "начнёте с начала? (1-ДА)" << endl;
		sin >> otv;
		a = otv == 1 ? true : false;
	}
	return 0;
}
