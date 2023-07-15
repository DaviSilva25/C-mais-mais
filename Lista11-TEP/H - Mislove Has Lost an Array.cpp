#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, l, r, max = 0, min = 0;

    cin >> n >> l >> r;
    
    for(int i=0; i < l; i++){
        min += pow(2,i);
    }
    min += 1*(n-l);

    for(int i=0; i < r; i++){
        max += pow(2,i);
    }
    max += pow(2,r-1) * (n-r);

    cout << min << " " << max << endl;
    
    return 0;
}   