#include "header.h"

int main() {
	using namespace std::chrono_literals;
	int n = 1;
	while (n != 0) {
		std::cout << "Enter the number of repetitions (0 to exit): "; 
		std::cin >> n;

		for (int i = 1; i <= n; ++i) {
        		std::cout << "Hello, World! #" << i << std::endl;
			std::this_thread::sleep_for(500ms);
    		}
	}
	return 0;
}
