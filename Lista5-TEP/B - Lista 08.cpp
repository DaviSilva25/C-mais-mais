#include <iostream>

using namespace std;

int main()
{
    int a, b, c, x, sum = 0;

    cin >> a >> b >> c >> x;
    
    if(a < x){
        sum += a;
        x -= a;
        //cout << "entrei sum: " << sum << endl;
        for(int i=b; i > 0 && x != 0; i--){
            sum += 0;
            x--;
            //cout << "entrei sum: " << sum << endl;
        }
        for(int i=c; i > 0 && x != 0; i--){
            sum -= 1;
            x--;
            //cout << "entrei sum: " << sum << endl;
        }
    }
    else if(a >= x)
        sum = x;
    
    cout << sum << endl;

    

    return 0;
}   