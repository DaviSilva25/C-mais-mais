#include <iostream>
template <typename T>

//USED TO GENERATE NAMY OVERLOAD FUNCTION WITH DIFFERENT DATA TYPES

T max(T x, T y){
    return (x>y) ? x : y;
}


int main()
{   
    

    std::cout << max(1,2) << '\n';
    std::cout << max(1.2,2.3) << '\n';
    std::cout << max('1','2') << '\n';
    return 0;
}
