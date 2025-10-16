#include <cassert>
#include <iostream>
#include <vector>

#include "matrix.hpp"

namespace {

void testCreateMatrixRectangular() {
    const auto matrix = createMatrix(2, 3);
    const std::vector<std::vector<int>> expected{
        {2, 3, 4},
        {1, 2, 3}
    };
    assert(matrix == expected);
}

void testCreateMatrixSquare() {
    const auto matrix = createMatrix(3, 3);
    const std::vector<std::vector<int>> expected{
        {3, 4, 5},
        {2, 3, 4},
        {1, 2, 3},
    };
    assert(matrix == expected);
}

void testIsToeplitzMatrixTrue() {
    const std::vector<std::vector<int>> matrix{
        {4, 5, 6},
        {3, 4, 5},
        {2, 3, 4},
        {1, 2, 3},
    };
    assert(isToeplitzMatrix(matrix));
}

void testIsToeplitzMatrixFalse() {
    const std::vector<std::vector<int>> matrix{
        {1, 2, 3},
        {4, 9, 6},
        {7, 8, 9},
    };
    assert(!isToeplitzMatrix(matrix));
}

}  // namespace

int main() {
    testCreateMatrixRectangular();
    testCreateMatrixSquare();
    testIsToeplitzMatrixTrue();
    testIsToeplitzMatrixFalse();

    std::cout << "All C++ Toeplitz matrix tests passed\n";
    return 0;
}
