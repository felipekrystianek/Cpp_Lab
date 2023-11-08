//
// Created by Krystian Filipek on 03/11/2023.
//

#include <iostream>

using namespace std;

int main() {
    float s = 7;

    for (int j = 1; j <= 15; j++) {
        s = s + (j + 5) / float(j);
    }

    cout << "Wynik S: " << s << endl;

    cin.get();
    return 0;
}
