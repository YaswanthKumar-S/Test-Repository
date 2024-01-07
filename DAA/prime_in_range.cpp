#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void printPrimesInRange(int L, int R) {
    for (int i = L; i <= R; i++) {
        if (isPrime(i)) cout << i << " ";
    }
}

int main() {
    int L = 1, R = 50;
    cout << "Prime numbers between " << L << " and " << R << " are: ";
    printPrimesInRange(L, R);
    return 0;
}
