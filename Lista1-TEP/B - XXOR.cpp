#include <iostream>

using namespace std;

int main()
{
    long N, K, aux, soma = 0, soma1;
    cin >> N >> K;
    long A[N];

    for(int i=0; cin >> aux ; i++)
        A[i] = aux;
        
    
    for(int i = K/2 - 1; i <= K; i++){
        soma1 = 0;
        for(int j=0; j < N ; j++){
            soma1 += A[j]^i;
        }

        if(soma1 >= soma)
            soma = soma1;
        }

    cout << soma;
    return 0;
}
