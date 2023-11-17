#include <cstdlib>
#include <iostream>
using namespace std;

void wypelnianie(int* tab, int wielkosc)
{
    srand(time(NULL));

    for (int i = 0; i < wielkosc; i++)
    {
        tab[i] = rand() % 10 + 1;
    }
}
void wyswietlanie(int* tab, int wielkosc)
{
    for (int i = 0; i < wielkosc; i++)
    {
        cout << tab[i] << endl;
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
}
void sort_wybieranie(int* tab, int wielkosc)
{
    int k;
    int x;

    for (int i = 0; i < wielkosc; i++)
    {
        k = i;

        for (int j = i + 1; j < wielkosc; j++)
        {
            if (tab[j] < tab[k])
            {
                k = j;
            }
        }

        x = tab[k];
        tab[k] = tab[i];
        tab[i] = x;
    }
}


int main()
{
    const int wielkosc = 10;
    int liczby[wielkosc];

    wypelnianie(liczby, wielkosc);
    wyswietlanie(liczby, wielkosc);
    cout << "\nLiczby posortowane przez wybieranie: " << endl;
    sort_wybieranie(liczby, wielkosc);
    wyswietlanie(liczby, wielkosc);
}


