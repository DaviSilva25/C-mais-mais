#include <iostream>
#include <string>

using namespace std;

int main()
{
    string A;
    int cont = 0;
    cin >> A;

    for(int i=0; i< A.length()/2; i++){

    
        if(A[i] != A[A.length()-(i+1)])
            cont++;
    }
    cout << cont << endl;

    return 0;
}   