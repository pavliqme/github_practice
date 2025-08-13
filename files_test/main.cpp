#include <iostream>

int main() {
    int n = 1;
    while (n != 0) {
	    std::cout << "Enter the number of repetitions (0 to exit): "; 
	    std::cin >> n;

	    for (int i = 1; i <= n; ++i) {
        	std::cout << "Hello, World! #" << i << '\n';
    	}
    }
    return 0;
}
