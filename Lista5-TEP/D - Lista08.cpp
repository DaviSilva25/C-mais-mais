#include <iostream>

using namespace std;

int main()
{
    int n, a, b, cont = 0;
    
    cin >> n >> a >> b;
    
    int x = n-a;

    for(int i=1; i <= x; i++)
        if( (x-i) <= b)
            cont++;
    cout << cont << endl;

    return 0;
}   