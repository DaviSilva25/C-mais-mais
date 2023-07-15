#include <iostream>


using namespace std;

unsigned long long contarDivisores (unsigned long long A, unsigned long long B, unsigned long long X) {
    
    unsigned long long divisores = 0;
    
    if(A == B && A%X != 0)
        return divisores;
    // Encontra o primeiro número divisível por X maior ou igual a A
    unsigned long long ultimoDivisivel = 0;
    unsigned long long primeiroDivisivel= 0;
    for(long long i = B; i != 0; i--)
        if(i%X == 0)
            ultimoDivisivel = i;
     for(long long i = A; i != 0; i++)
        if(i%X == 0)
            primeiroDivisivel= i;
    

    // Calcula a quantidade de divisores usando uma fórmula matemática
    divisores = ((ultimoDivisivel - primeiroDivisivel + 1) / X);
    
    return divisores;
}

int main()
{
    unsigned long long a, b, x;

    cin >> a >> b >> x;
    
    cout << contarDivisores(a, b, x) << endl;
    

    return 0;
}   