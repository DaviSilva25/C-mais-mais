#include <iostream>

using namespace std;

int main()
{
    int A,B;

    cin >> A >> B;

    switch (unsigned(A) + unsigned(B)){
        case 3:
            cout << 3 << endl;
        break;

        case 4:
            cout << 2 << endl;
        break;

        case 5:
            cout << 1 << endl;
        break;
    }
    return 0;
}
