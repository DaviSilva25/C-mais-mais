#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long A, B, K, Taka = 0, Aoki = 0;

    cin >> A >> B >> K;

    if(K > A){
        Taka = 0;
        K = abs(K-A);
    }
    else if (A > K){
        Taka = A-K;
        K = 0;
    }
    else{
        K = 0;
    }
    if(K > B)
        Aoki = 0;
    else
        Aoki = B-K;

    cout << Taka << " " << Aoki << endl;
    

    return 0;
}   