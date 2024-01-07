#include <bits/stdc++.h>
using namespace std;

int calculateProduct (int A [], int L, int R, int P) {
    L = L - 1;
    R = R - 1;
    int ans = 1;
    for (int i = L; i <= R; i++) {
        ans = ans * A [i];
        ans = ans % P;
    }
    return ans;
}

int main () {
    int A [] = { 1, 2, 3, 4, 5, 6 };
    int P = 229;
    int L = 2, R = 5;
    cout << calculateProduct (A, L, R, P) << endl;
    L = 1, R = 3;
    cout << calculateProduct (A, L, R, P) << endl;
    return 0;
}
