#include "header.h"

int main(int argc, char* argv[]) {
    std::string last_word;

    bool check_eula = true;
    if (argc > 1) {
        std::string arg = argv[1];
        if (arg == "1") {
            check_eula = false;
            last_word = "true";
        }
    }

    if (check_eula) {
        std::ifstream file("EULA.txt");
        if (!file.is_open()) {
            std::cerr << "Error EULA-file reading\n";
            return 1;
        }

        std::string line;
        if (std::getline(file, line)) {
            line.erase(0, line.find_first_not_of(" \t\n\r"));
            line.erase(line.find_last_not_of(" \t\n\r") + 1);

            std::istringstream iss(line);
            std::string word;
            while (iss >> word) {
                last_word = word;
            }

            std::transform(last_word.begin(), last_word.end(), last_word.begin(),
                           [](unsigned char c){ return std::tolower(c); });
        } else {
            std::cerr << "Empty EULA-file\n";
            return 1;
        }
    }

    if (last_word == "true" || last_word == "yes") {
        std::cout << "EULA accepted. Running...\n";
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
    } else {
        std::cout << "Accept EULA first! Exiting....\n";
        return 1;
    }

    return 0;
}
