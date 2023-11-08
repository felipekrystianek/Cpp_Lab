//
// Created by Krystian Filipek on 20/10/2023.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//
//int main()
//{
//    srand(time(0));
//    for (int i = 0; i < 6; i++)
//    {
//        cout.width(4);
//        cout << 1 + rand() % 49;
//    }
//
//    cout << endl;
//    cin.get();
//}

int main()
{
    srand(time(0));
    const int wymiar = 10;
    int tab[wymiar];

    for(int i = 0; i < wymiar; i++)
    {
        tab[i] = 1 + rand() % 10;
        cout<<tab[i]<< " ";
    }

    // Suma wszystkich elementów tablicy
    int suma = 0;
    for(int i = 0; i < wymiar; i++)
    {
        suma = suma + tab[i];
    }
    cout << "\nSuma wszystkich elementów tablicy: " << suma << endl;

    // Suma  parzystych

    suma = 0;
    int ilość = 0;
    for(int i = 0; i < wymiar; i++)
    {
        if (tab[i] % 2 == 0) {
            suma = suma + tab[i];
            ilość++;
        }
    }
    double srednia = suma/ilość;
    cout << "Suma parzystych elementów tablicy: " << suma << endl;
    cout << "Ilość przystych liczb: " << ilość << endl;
    cout << "Średnia liczb " << (suma)*1.0/ilość << endl;

    // Suma nieparzystych
    suma = 0;
    for(int i = 0; i < wymiar; i++)
    {
        if (tab[i] % 2 == 1)
            suma = suma + tab[i];
    }
    cout << "Suma nieparzystych elementów tablicy: " << suma << endl;



    cin.get();
}
