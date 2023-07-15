#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, s = 1, t, count = 0;

    cin >> n;
    
    t = (n/2) - 1;

    if(n%2 == 0){
        while(t > s){
        t--;
        s++;
        count++;
        }
    }
    
    
    cout << count << endl;
    
    return 0;
}   