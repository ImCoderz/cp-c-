#include <iostream>

int trailing_zeros(int n) {
    int count = 0;
    int i = 5;
    while (n / i >= 1) {
        count += n / i;
        i *= 5;
    }
    return count;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << trailing_zeros(n) << std::endl;
    return 0;
}
