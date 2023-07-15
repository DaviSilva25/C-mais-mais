#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int nextPrime(int x) {
    while (!isPrime(x)) {
        ++x;
    }
    return x;
}

int main() {
    int X;
    cin >> X;

    int next = nextPrime(X);
    cout << next << endl;

    return 0;
}