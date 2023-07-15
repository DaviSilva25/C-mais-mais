#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    long long sum = 0;

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            for (int k = 1; k <= c; k++) {
                sum = (sum + ((i * j * k) % 1073741824) + 1) % 1073741824;
            }
        }
    }

    std::cout << sum << std::endl;

    return 0;
}