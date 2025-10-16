#pragma once

#include <vector>

bool isToeplitzMatrix(const std::vector<std::vector<int>>& matrix) {
    for (std::size_t row = 1; row < matrix.size(); ++row) {
        for (std::size_t col = 1; col < matrix[row].size(); ++col) {
            if (matrix[row][col] != matrix[row - 1][col - 1]) {
                return false;
            }
        }
    }
    return true;
}

std::vector<std::vector<int>> createMatrix(int rows, int cols) {
    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));
    for (int row = 0; row < rows; ++row) {
        int value = rows - row;
        for (int col = 0; col < cols; ++col) {
            matrix[row][col] = value++;
        }
    }
    return matrix;
}
