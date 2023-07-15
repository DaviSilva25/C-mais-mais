#include <iostream>
#include <cmath>

using namespace std;

int checkPower (int raiz, int numero){
    
    if(numero == 1)
        return 1;
        
    int potencia = 0;
    int x = 2;
    int num = 0;
    //cout << x << endl;
    while(x <= raiz+1){
        for(int i=2; num <= numero; i++){
            num = pow(x, i);
            //cout << num << endl;
            if(num > potencia && num <= numero)
                potencia = num;
        }
        num = 0;
        ++x;
    }

    return potencia;
}
int main()
{
    int X;

    cin >> X;

    int raiz = sqrt(X);

    cout << checkPower(raiz, X);

    return 0;
}   