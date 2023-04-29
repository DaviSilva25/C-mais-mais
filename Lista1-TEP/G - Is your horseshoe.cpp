#include <iostream>

using namespace std;

int main()
{
    int A,B,C,D, n = 0;

    cin >> A >> B >> C >> D;

    int v[4];
    v[0] = A;
    v[1] = B;
    v[2] = C;
    v[3] = D;

    for(int i=0; i < 3; i++)
        for(int j = i+1; j < 4; j++)
            if(v[i] == v[j]){
                n++;
                break;
            }
    
    
    cout << n << endl;

    return 0;
}
