#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a;
	cout << "Введите число, до которого надо найти все простые числа: " << endl;
	cin >> a;
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