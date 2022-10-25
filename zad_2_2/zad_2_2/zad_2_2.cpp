#include <iostream>
using namespace std;

//zad2.2

int main() {
	int a, b;
	char x = '*';
	cout << "Enter two natural numbers (separated by space) ";
	cin >> a >> b;

	while (a < 1 || b < 1) {
		cout << "At least one of the numbers is incorrect" << endl;
		cout << "Enter two natural numbers (separated by space) ";
		cin >> a >> b;
	}
	//A) program wypisuje podane liczby na ekran
	cout << "Podane liczby to " << a << " oraz " << b << endl;

	//B) program wypisuje wiersz gwiazdek o długości a
	int i = 0;
	cout << "Row of stars - length of " << a << " :" << endl;
	for (i; i < a; i++) {
		cout << x;
	}
	cout << endl;

	//C) program wypisuje kolumnę gwiazdek o długości b
	int j = 0;
	cout << "Column of stars - length of " << b << " :" << endl;
	for (j; j < b; j++) {
		cout << x << endl;
	}

	//D) program wypisuje prostokąt wypełniony gwiazdkami o bokach a i b
	int k = 0;
	int l = 0;
	cout << "Rectangle with side length " << a << " and " << b << endl;
	for (l; l < b; l++) {
		for (k; k < a; k++) {
			cout << x;
		}
		k = 0;
		cout << endl;
	}

	//E) program pokazuje sam obwód prostokąta (niewypełniony)
	j = 0;
	k = 0;
	l = 0;
	cout << "Empty rectangle with side length " << a << " and " << b << endl;

	for (j; j < b; j++) {
		if (j == 0 || j == b-1) {
			for (k; k < a; k++) {
				cout << x;
			}
			k = 0;
			cout << endl;
		}
		else {
			cout << x;
			for (l; l < (a - 2); l++) {
				cout << " ";
			}
			l = 0;
			cout << x << endl;
		}
	}

	//F) trójkąt prostokątny równoramienny (kąt prosty - lewy dolny róg)
	k = 0;
	l = 0;
	cout << endl;
	cout << "Isoscale triangle with a length of side " << a << " (left bottom corner)" << endl;
	for (l; l < a; l++) {
		for (k; k < (l+1); k++) {
			cout << x;
		}
		k = 0;
		cout << endl;
	}

	//G) trójkąt równoramienny (kąt prosty - prawy górny róg)
	k = 0;
	l = 0;
	cout << "Isoscale triangle with a length od side " << a << " (right upper corner)" << endl;
	for (k; k < a; k++)
	{
		for (l; l < a; l++)
		{
			if (k <= l)
			{
				cout << x;
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
		l = 0;
	}
	return 0;
}