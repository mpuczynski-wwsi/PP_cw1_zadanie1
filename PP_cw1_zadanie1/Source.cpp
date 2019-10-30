#include<iostream>
using namespace std;

double c2f(double stopnie) {
	return 1.8 * stopnie + 32;

}

double f2c(double stopnie) {
	return (stopnie - 32) * (5.0 / 9);
}


int main() {
	int wybor;
	double wynik, stopnie;

	cout << "stopnie celsjusza do fahrenheita (1), stopnie fahrenheita do celsjusza (2): ";
	cin >> wybor;

	switch (wybor)
	{
	case 1:
		cout << "\n" << "podaj stopnie w celsjuszach ktore chcesz przeliczyc do fahrenheita: ";
		cin >> stopnie;

		if (stopnie < -273) { cout << "\nnie ma temperatury nizszej niz 0 Kalvina"; return 0; }

		wynik = c2f(stopnie);
		printf("\n%.1f stopni Celsjusza to %.1f stopni Fahrenheita ", stopnie, wynik);
		break;
	case 2:
		cout << "\n" << "podaj stopnie w fahrenheitach ktore chcesz przeliczyc do celsjusza: ";
		cin >> stopnie;

		if (stopnie < -459) { cout << "\nnie ma temperatury nizszej niz 0 Kalvina"; return 0; }

		wynik = f2c(stopnie);
		printf("\n%.1f stopni Fahrenheita to %.1f stopni Celsjusza ", stopnie, wynik);
		break;
	default:
		cout << "\nzla opcja";
		break;
	}

}