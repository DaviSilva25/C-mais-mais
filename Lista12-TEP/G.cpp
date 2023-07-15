#include <iostream>

using namespace std;

int main()
{
    int n,d, cont = 0;

    cin >> n >> d; 
    
    int v[n];
    for(int i=0; i < n; i++){
        cin >> v[i];
    }
    for(int i=0; i < n-1; i++){
        while(v[i] >= v[i+1]){
            cont++;
            v[i+1] += d;
        }

    }    

    cout << cont << endl;
    return 0;
}   