#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	double a, b, s;

	// 6 задача
	cout << "6 задача" << endl;

	cin >> a >> b >> s;
	if (!a) {
		(!b ? cout << "корней нема" : cout << -s / b) << endl;
	}
	else {
		double d = b * b - 4 * a * s;
		if (d < 0) {
			cout << "корней нема" << endl;
		}
		else {
			!d ? cout << -b / 2 * a << endl : cout << (-b + sqrt(d)) / 2 * a << endl << (-b - sqrt(d)) / 2 * a << endl;
		}
	}

	return 0;
}

