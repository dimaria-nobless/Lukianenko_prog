

#include <iostream>

using namespace std;

int main()
{
	double n, m;
	char q;
	cin >> n >> q >> m;
	switch (q) {
	case '/':
		if (m == 0) {
			cout << "you idiot, delenie na nol" << endl;
		}
		else {
			cout << n / m;
			}
		break;
	case '+':
		cout << n + m;
		break;
	case '-':
		cout << n - m;
		break;
	case '*':
		cout << n * m;
	}
	return 0;
}

