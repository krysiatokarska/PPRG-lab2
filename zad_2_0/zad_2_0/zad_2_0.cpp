#include <iostream>
using namespace std;


int main() {
	// Ile kawałków pizzy przypadnie na każdego uczestnika imprez tak,
	// aby każdy z gości otrzymał tyle samo kawałków (reszta idzie dla organizatora)

	// liczba gości
	int guests;
	cout << "Podaj liczbe gosci ";
	cin >> guests;
	// liczba kawałków pizzy
	int slices;
	int slices_organizator;
	cout << "Pizze sa podzielone na 8 kawalkow, i kazdy uczestnik dostanie przynajmniej jeden kawalek pizzy" << endl;
	// Zakładamy, że pizzę dzielimy na 8 kawałków i chcemy,
	// aby każdy gośc dostał co najmniej 1 kawałek, więc jak jest więcej uczestników - zamawiamy
	// więcej pizzy
	slices = (guests + guests % 8) / 8;
	slices_organizator = (guests % 8);
	cout << "Kazdy uczestnik dostanie po " << slices << " kawalkow";
	return 0;
}