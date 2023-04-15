#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int A,B,C,D;

    cin >> A >> B >> C >> D;

    if(abs(A - C) <= D)
        cout << "Yes" << endl;
    else if(abs(A - B) <= D && abs(B-C) <= D)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}   