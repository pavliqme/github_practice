#include <iostream>

int main() {
    int n;
    std::cout << "Введите количество повторений: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        std::cout << "Hello, World! #" << i << '\n';
    }

    return 0;
}
