#include<iostream>
#include<cstdlib>
using namespace std;
//ile jest liczb pierwszych od 7-8 mln  11-12
bool czy_pierwsza(unsigned long long n)
{
	if (n < 2) return false;

	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0) return false;
	}
	return true;
}

void sito(unsigned long long n)
{
	for (unsigned long long i = 2; i <= n + 1; i++)
	{
		if (czy_pierwsza(i)) cout << i << endl;
	}
}

int main()
{
	int x = 0;
	int n = 0;
	cout << "1 metoda: " << endl;
	cout << "2 Sito Eratostenesa: " << endl;
	cin >> x;

	cout << "Podaj liczbe: ";
	cin >> n;
	if (x == 1)
	{
		if (czy_pierwsza(n)) cout << "Liczba " << n << " jest pierwsza" << endl;
		else cout << "Liczba " << n << " nie jest pierwsza" << endl;
	}
	else if (x == 2)
	{
		sito(n);
	}

	return 0;
}
