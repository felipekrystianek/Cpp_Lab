//
// Created by Krystian Filipek on 03/11/2023.
//
#include "iostream"
using namespace std;

int main(){
    float s1 = 0;

    for (int k = 2; k <= 12; k++) {
        s1 = s1 + 1 / (float(k) + 1);
    }

    s1 = 7 + (2 / s1);
    cout << "Suma to: " << s1 << endl;

    cin.get();
    return 0;
}