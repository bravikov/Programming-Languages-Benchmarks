#include <iostream>
#include "matrix.hpp"

int main() {
    int rows = 10000;
    int cols = 10000;
    auto matrix = createMatrix(rows, cols);
    bool result = isToeplitzMatrix(matrix);
    std::cout << "rows: " << rows << ", cols: " << cols << ", result: " << std::boolalpha << result << '\n';
    return 0;
}
