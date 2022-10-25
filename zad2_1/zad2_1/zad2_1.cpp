#include <iostream>
using namespace std;

//zad2.1
//Napisz pętlę, która zwróci sumę szeregu 1, 1+2, 1+2+3, ..., 1+2+...+n

int main() {
	int n;
	cout << "Enter a natural number higher than 0: ";
	cin >> n;

	while (n < 0) {
		cout << "The number is incorrect" << endl;
		cout << "Enter a natural number higher than 0: ";
		cin >> n;
	}

	int sum1 = 0;
	int sum = 0;
	int j = 1;
	int i = 1;
	for (i; i <= n; i++) {
		for (j; j <= i; j++) {
			sum1 += j;
		}
		sum += sum1;
		j = 0;
		sum1 = 0;
	}

	if (n == 1) {
		cout << "Sum of 1 is " << sum << endl;
	}
	else if (n == 2) {
		cout << "Sum of 1 + (1+" << n << ") is equal " << sum << endl;
	}
	else {
		cout << "Sum of 1 + (1+2) + ... + (1+2+...+" << n << ") is equal " << sum << endl;
	}
	return 0;
}