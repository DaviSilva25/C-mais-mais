#include <iostream>
#include <unordered_set>

using namespace std;

int countPrimeFactors(int num) {
    unordered_set<int> factors; 

    while (num % 2 == 0) {
        factors.insert(2);
        num /= 2;
    }

    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            factors.insert(i);
            num /= i;
        }
    }

    if (num > 2) {
        factors.insert(num);
    }

    return factors.size();
}

int main() {
    int num;
    while (cin >> num)
        if(num != 0)
            cout << num << " : " << countPrimeFactors(num) << endl;
        else
            break;
    return 0;
}
