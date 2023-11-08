//
// Created by Krystian Filipek on 27/10/2023.
//

#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    // Wypełnić tablicę jednowymiarową, 10-elementową liczbami losowymi z zakresu [50;150].
    int tab[10];
    srand(time(0));

    for (int i = 0; i < 10; ++i)
    {
        tab[i] = rand() % 101 + 50;
        cout << "tab[" << i << "] = " << tab[i] << endl;
    }

    // Obliczyć ilość liczb większych od 100 i mniejszych od 120 i wyświetl na ekranie ich numery.
    int licznik = 0;

    for (int i = 0; i < 10; i++) {
        if (tab[i] > 100 && tab[i] < 120) {
            licznik++;
            cout << "Numer elementu: " << i << ", Wartość: " << tab[i] << endl;
        }
    }
    cout << "Ilość liczb większych od 100 i mniejszych od 120: " << licznik << endl;

    cout << endl;
    cin.get();
}
