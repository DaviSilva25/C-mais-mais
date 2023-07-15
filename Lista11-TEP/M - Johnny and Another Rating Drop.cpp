#include <iostream>
#include <cmath>
#include <bitset>

using namespace std;

int main()
{
    int n, aux;
    long long sum;

    cin >> n;

    for(int i=0; i < n; i++){
        cin >> aux;
        sum = 0;
        for(int j=0; j < aux; j++){
            bitset<32> xorResult = j ^ (j+1);
            sum += xorResult.count();
        }
        cout << sum << endl;
    }

    

    return 0;
}   