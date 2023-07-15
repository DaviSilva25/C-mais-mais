#include <iostream>

#define MAX_VALUE 10000000000
using namespace std;

long long linha[MAX_VALUE][MAX_VALUE];

int main()
{
    long long n, m, x, y;
    cout << "aqui";
    cin >> n >> m;
    
    long long cont;

    cout << "aqui";

    for(long long i=0; i<n; i++){
        for(long long j=0; j<n; j++){
            linha[i][j] = 0;
        }
        
    }
    // for(unsigned long long o=0; o < m; o++){
    //         cin >> x >> y;
    //         for(unsigned long long i=0; i<n; i++){
    //             if(linha[x-1][i] == 0){
    //                 linha[x-1][i] = 1;
    //                 cont--;
    //                 }                
    //             }
            
    //         for(unsigned long long j=0; j<n; j++){
    //             if(linha[j][y-1] == 0){
    //                 linha[j][y-1] = 1;
    //                 cont--;
    //             }
    //         }
    
    // for(unsigned long long i=0; i<n; i++){
    //     for(unsigned long long j=0; j<n; j++){
    //         cout << linha[i][j] << " ";
    //     }
    //     cout << endl;
    // }
        cout << cont << endl;
    
    return 0;
}   