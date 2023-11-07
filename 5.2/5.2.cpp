#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a;
	setlocale(LC_ALL, "Rus");
	cout << "Введите натуральное число, до которого надо найти все простые числа: " << endl;
	cin >> a;
	while (a <= 0) {
		cout << "try again." << endl;
		cin >> a;
	}
	for (int i = 2; i <= a; i++) {
		bool fl = true;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				fl = false;
			}
		}
		if (fl) {
			cout << i << endl;
		}
	}

}