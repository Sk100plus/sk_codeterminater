#include <iostream>

int main() {
    // Declaration and initialization of a 3D array
    int cube[2][3][4] = {
        {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}},
        {{13, 14, 15, 16}, {17, 18, 19, 20}, {21, 22, 23, 24}}
    };

    // Accessing elements of the 3D array
    std::cout << "Element at cube[1][2][3]: " << cube[1][2][3] << std::endl;

    // Iterating through the 3D array
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 4; ++k) {
                std::cout << cube[i][j][k] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}
