#include <iostream>

int main() {
    int width = 30;
    int height = 15;

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            if (j < width / 3)
                std::cout << "\033[41m ";
            else if (j < 2 * width / 3)
                std::cout << "\033[47m ";
            else
                std::cout << "\033[44m ";
        }
        std::cout << "\033[0m\n";
    }

    return 0;
}