#include <iostream>

using namespace std;

int main()
{
    int N,M, a,b, aux,  n = 0;
    cin >> N >> M;

    int vN[N], vM[M];

    for(int i = 0; i < N; i++){
        cin >> aux;
        vN[i] = aux;
        
    }

    for(int i = 0; i < M; i++){
        cin >> aux;
        vM[i] = aux;
        
    }

    cin >> a >> b;

        for (int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                if(vN[i] >= vM[j]){
                    if(vN[i] == vM[j]){
                        n++;
                        break;
                    }
                }
                else
                    break;
            }
        }

    cout << n << endl;
    

    return 0;
}
