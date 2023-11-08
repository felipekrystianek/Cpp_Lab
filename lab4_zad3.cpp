//
// Created by Krystian Filipek on 03/11/2023.
//
#include "iostream"
#include <cmath>
using namespace std;

int main(){
    float s1, s2;

    s1 = 0;
    for (int j = 1; j <= 5; j++) {
        s2 = 0;
        for (int k = 2; k <= 12; k++) {
            s2 = s2 + sqrt(float(j)) / (float(k) + 1);
        }
        s1 = s1 + 7 + s2;
    }
    cout << "Suma to: " << s1 << endl;
}