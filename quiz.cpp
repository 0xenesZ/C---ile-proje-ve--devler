#include <iostream>

int main() {
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 1 || i == 6 || j == 1 || j == 5) {
                std::cout << "1";
            } else {
                std::cout << "0";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}

