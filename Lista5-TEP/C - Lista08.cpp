#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x, n, sum = 0;
    
    cin >> x;
    
    for(int i=0; i < x; i++){
        cin >> n;
        sum += n/100;
    }


    
    cout << setprecision(12) << fixed;
    cout << (sum/x)*100 << endl;

    

    return 0;
}   