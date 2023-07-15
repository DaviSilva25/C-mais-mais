#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int A, B, cont = 1;

    cin >> A >> B; 

    while(1){
        if(B >= cont){
            B -= cont;
        }
        else
            break;
        if(cont == A)
            cont = 1;
        else
            cont++;
    }
    cout << B << endl;
    

    return 0;
}   