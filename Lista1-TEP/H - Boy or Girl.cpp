#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n = 0;
    string word;

    cin >> word;

    for (int i = 0; i < word.length(); i++){
        for(int j = i+1; j < word.length(); j++)
            if(word[i] == word[j]){
                n++;
                break;
            }
    }

    if((word.length()-n)%2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}
