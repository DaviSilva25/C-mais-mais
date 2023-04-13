#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{   
    // HELLO WORLD
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    //integer declaration
    int age = 21;
    int year = 2023;
    int days = 7;

    //double declaration
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    //char declaration
    char grade = 'A';
    char initial = 'C';
    char dollarSign = '$';

    //boolean declaration
    bool student = false;
    bool power = true;
    bool forSale = true;

    //string declaration
    std::string name = "Davi";
    std::string day = "Friday";
    std::string food = "Pizza";

    std::cout << "Hello " << name << " Today is:" << day;

}
