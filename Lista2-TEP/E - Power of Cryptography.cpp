#include <iostream>


using namespace std;

int checkPower (long long raiz, long long numero){
            
    long long num = raiz;
    long long cont = 0;
    //cout << x << endl;
        for(int i=0; num != numero; i++){
            num *= raiz; 
            cont++;
        }
    return cont;
}
int main()
{
    long long X, Y;

    while((cin >> X >> Y)){
        cout << checkPower(X, Y) << endl;
    }

    return 0;
}   