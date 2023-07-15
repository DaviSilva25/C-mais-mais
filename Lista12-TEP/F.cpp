#include <iostream>

using namespace std;

int main()
{
    int n1,n2, k1, k2;

    cin >> n1 >> n2 >> k1 >> k2; 

    while(1){
        n1--;
        if(n1 == 0 && n2 > 0){
            cout << "Second" << endl;
            break;
        }
        n2--;
        if(n2 == 0 && n1 > 0){
            cout << "First" << endl;
            break;
            }
    }    

    return 0;
}   