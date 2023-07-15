#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int b, g , n, cont = 0;

    cin >> b >> g >> n;

    for(int i=0; i<=b; i++){
        for(int j=0; j<=g; j++){
            if(j+i == n)
                cont++;
        }
    }

    cout << cont << endl;

    return 0;
}   