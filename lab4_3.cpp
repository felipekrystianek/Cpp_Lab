//
// Created by Krystian Filipek on 03/11/2023.
//

#include "iostream"
using namespace std;

int main(){
    float s1 = 0, s2 = 0;

    for (int j = 1; j <= 4; j++) {
        for (int k = 1; k <= 21; k++) {
            s2 = s2 + (j + k) / float(j);
        }
        s1 = s1 + 1 / s2;
    }
    s1 = 2 + s1;
    cout << "Suma to: " << s1 << endl;
}