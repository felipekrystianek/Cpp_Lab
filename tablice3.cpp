//
// Created by Krystian Filipek on 27/10/2023.
//

#include <iostream>
#include <ctime>

using namespace std;

const int W = 6;
int tab2w[W][W];

void wyswietl(int tabx[W][W])
{
    for (int i = 0; i < W; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cout.width(3);
            cout << tabx[i][j];
        }
        cout << endl;
    }
}

int main() {
    int ilosc = 0, suma = 0, liczbaSzesc = 0;
    srand(time(0));

    for (int i = 0; i < W; i++)
    {
        for (int j = 0; j < W; j++)
        {
            tab2w[i][j] = 1 + rand() % 6;
            if (tab2w[i][j] == 6)
            {
                liczbaSzesc++;
            }
        }
    }

    cout << "Tablica " << W << "x" << W << " z losowymi liczbami od 1 do 6:\n";
    wyswietl(tab2w);

    // suma wszystkich elementów
    for (int i = 0; i < W; i++)
    {
        for (int j = 0; j < W; j++)
        {
            suma += tab2w[i][j];
        }
    }
    cout << "Suma wszystkich elementów: " << suma << endl;

    // Oblicz sumę i średnią liczb parzystych
    suma = 0;
    for (int i = 0; i < W; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (tab2w[i][j] % 2 == 0)
            {
                suma += tab2w[i][j];
                ilosc++;
            }
        }
    }

    cout << "Suma liczb parzystych: " << suma << endl;
    if (ilosc > 0)
    {
        cout << "Średnia liczb parzystych: " << (suma)*1.0 / ilosc << endl;
    }
    else
    {
        cout << "Brak liczb parzystych w tablicy." << endl;
    }

    // Wyświetl ilość wystąpień liczby 6
    cout << "Ilość wystąpień liczby 6: " << liczbaSzesc << endl;

    return 0;
}
