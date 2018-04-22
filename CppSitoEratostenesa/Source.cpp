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

int ile_pierwszych(unsigned long long a, unsigned long long b)
{
	unsigned long long licz = 0;
	for (; a < b; a++)
	{
		if (czy_pierwsza(a)) licz++;
	}
	return licz;
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
	unsigned long long a = 0;
	unsigned long long b = 0;

	cout << "1 metoda: " << endl;//
	cout << "2 Sito Eratostenesa: " << endl;
	cout << "3 Ile licz pierwszych w przedziale: " << endl;
	cin >> x;

	
	if (x == 1)
	{
		cout << "Podaj liczbe: ";
		cin >> n;
		if (czy_pierwsza(n)) cout << "Liczba " << n << " jest pierwsza" << endl;
		else cout << "Liczba " << n << " nie jest pierwsza" << endl;
	}
	else if (x == 2)
	{
		cout << "Podaj liczbe: ";
		cin >> n;
		sito(n);
	}
	else if( x == 3)
	{
		cout << "1 liczba: " << endl;//
		cin >> a;
		cout << "2 liczba: " << endl;
		cin >> b;
		cout << ile_pierwszych(a, b) << endl;
	}

	return 0;
}
