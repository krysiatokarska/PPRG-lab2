#include <iostream>
using namespace std;

// zad 2.3 Użyj instrukcji switch do wypisywania jaki jest miesiąc i w jakim miesiącu jest słonecznie, a w jakim pochmurno

int main()
{
	int month;
	cout << "Enter a natural number between 1 and 12, whitch represents a month ";
	cin >> month;

	switch (month)
	{
	case 1:
		cout << month << " miesiac to Styczen, ma 31 dni i jest wtedy pochmurno.";
		break;
	case 2:
		cout << month << " miesiac to Luty, ma 28 dni i jest wtedy pochmurno.";
		break;
	case 3:
		cout << month << " miesiac to Marzec, ma 31 dni i jest wtedy pochmurno.";
		break;
	case 4:
		cout << month << " miesiac to Kwiecien, ma 30 dni i jest wtedy slonecznie.";
		break;
	case 5:
		cout << month << " miesiac to Maj, ma 31 dni i jest wtedy slonecznie.";
		break;
	case 6:
		cout << month << " miesiac to Czerwiec, ma 30 dni i jest wtedy slonecznie.";
		break;
	case 7:
		cout << month << " miesiac to Lipiec, ma 31 dni i jest wtedy slonecznie.";
		break;
	case 8:
		cout << month << " miesiac to Sierpien, ma 31 dni i jest wtedy slonecznie.";
		break;
	case 9:
		cout << month << " miesiac to Wrzesien, ma 30 dni i jest wtedy slonecznie.";
		break;
	case 10:
		cout << month << " miesiac to Pazdziernik, ma 31 dni i jest wtedy pochmurno.";
		break;
	case 11:
		cout << month << " miesiac to Listopad, ma 30 dni i jest wtedy pochmurno.";
		break;
	case 12:
		cout << month << " miesiac to Grudzien, ma 31 dni i jest wtedy pochmurno.";
		break;
	default:
		cout << "The number is incorrect - it does not represent any month";
	}

	// W drugiej wersji program miał 3 switche - pierwszy wypisywał tylko miesiące, a kolejne dokładały następne części, jednak ze 
	// względu na to, że w pierwszym switchu trzeba było i rak robić 12 osobnych case'ów \zdecydowałam się zostać przy jednym switchu.

	//switch (month)
	//{
	//case 1:
	//case 3:
	//case 5:
	//case 7:
	//case 8:
	//case 10:
	//case 12:
	//	cout << ", ma 31 dni";
	//	break;
	//case 2:
	//	cout << ", ma 28 dni";
	//	break;
	//case 4:
	//case 6:
	//case 9:
	//case 11:
	//	cout << ", ma 30 dni";
	//	break;
	//default:
	//	break;
	//}

	//switch (month)
	//{
	//case 1:
	//case 2:
	//case 3:
	//case 10:
	//case 11:
	//case 12:
	//	cout << " i jest wtedy pochmurno.";
	//		break;
	//case 4:
	//case 5:
	//case 6:
	//case 7:
	//case 8:
	//case 9:
	//	cout << " i jest wtedy slonecznie.";
	//	break;
	//default:
	//	break;
	//}
	return 0;
}


