//
// Created by Krystian Filipek on 20/10/2023.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    const int iloscLiczb = 10;
    int wylosowaneLiczby[iloscLiczb];
    int min = 2;
    int max = 40;

    for (int i = 0; i < iloscLiczb;)
    {
        int liczbaLosowa = rand() % (max - min + 1) + min;
        if (liczbaLosowa % 2 == 0)
        {
            wylosowaneLiczby[i] = liczbaLosowa;
            i++;
        }
    }

    cout << "10 losowych liczb parzystych z zakresu od " << min << " do " << max << ":\n";
    for (int i = 0; i < iloscLiczb; i++)
    {
        cout << wylosowaneLiczby[i] << " ";
    }

    cin.get();
}
