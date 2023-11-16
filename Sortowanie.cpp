#include <iostream>
#include <cstdlib>
using namespace std;

void wypelnianie(int* tab, int wielkosc)
{
	srand(time(NULL));

	for (int i = 0; i < wielkosc; i++)
	{
		tab[i] = rand() % 100 + 1;
	}
}
void wyswietlanie(int* tab, int wielkosc)
{
	for (int i = 0; i < wielkosc; i++)
	{
		cout << "Liczba nr. " << i + 1 << ": " << tab[i] << endl;
	}
}
void sort_babelkowe(int* tab, int wielkosc)
{
	int x;

	for (int i = 0; i < wielkosc; i++)
	{
		for (int j = 0; j < wielkosc - i; j++)
		{
			if (tab[j - 1] > tab[j])
			{
				x = tab[j];
				tab[j] = tab[j - 1];
				tab[j - 1] = x;
			}
		}
	}

	for (int i = 0; i < wielkosc; i++)
	{
		cout << tab[i] << endl;
	}
}
void sort_wybieranie(int* wej, int wielkosc)
{
	int k;
	for (int i = 0; i < wielkosc; i++)
	{
		k = i;
		for (int j = i + 1; j < wielkosc; j++)
			if (wej[j] < wej[k])
				k = j;

		swap(wej[k], wej[i]);
	}

	for (int i = 0; i < wielkosc; i++)
	{
		cout << wej[i] << endl;
	}
}

int main()
{
	const int wielkosc = 10;
	int liczby[10];

	wypelnianie(liczby, wielkosc);
	wyswietlanie(liczby, wielkosc);
	cout << "Sortowanie babelkowe: " << endl;
	sort_babelkowe(liczby, wielkosc);
	cout << "Sortowanie przez wybieranie: " << endl;
	sort_wybieranie(liczby, wielkosc);
}


