#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;

namespace first{
    int x = 27;
}

namespace second{
    int x = 30;
}

int main() {
    //Const doesnt allow to change variants values
    //exemples
    const double PI = 3.14159;
    const int LIGHT_SPEED = 299792458;

    /*namespace provides a solution for preventing name c
    onflicts in large projects. Each entity needs a unique 
    name. A namespace allows for identically named entities 
    as long as the namespaces are different.*/

    //exemples 
    std::cout << first::x << "\n";
    std::cout << second::x << "\n";
    //allows to cut the std from the beginnig
    using namespace std;
    cout << first::x << "\n";

    //typedef = reserved keyword used to create as additional name
    //(alias) for another data type.
    //New identifier for an existing type 
    //Helps with readabitily and reduce typos

    //pair combine two types of variables that can be of different data types
    pairlist_t pairlist;
    
    //type convertion= converts a data type to another
    int pi = 3.14;
    //Implicit: automatic
    cout << pi << "\n"; // will result to 3 in a implicit convertion
    //Explicit: procede value with new data type
    double pi2 = (int) 3.14;
    cout << pi2 << "\n"; 

    //input
    string text;
    int number;

    cout << "Type a number: ";
    cin >> number;
    cout << "Type anything: ";
    getline(cin >> ws, text);

    cout << "Typed: " << text << "\n";
    cout << "Number: " << number << "\n";

    return 0;
}