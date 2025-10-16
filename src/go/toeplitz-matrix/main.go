package main

import (
	"fmt"
)

func isToeplitzMatrix(matrix [][]int) bool {
    for row := 1; row < len(matrix); row++ {
        for col := 1; col < len(matrix[0]); col++ {
            prev_row := row - 1
            prev_col := col - 1
            if matrix[prev_row][prev_col] != matrix[row][col] {
                return false
            }
        }
    }

    return true;
}

func createMatrix(rows, cols int) [][]int {
	/*
		If rows is 5 and cols is 5:

		5 6 7 8 9
		4 5 6 7 8
		3 4 5 6 7
		2 3 4 5 6
		1 2 3 4 5
	*/

	matrix := make([][]int, rows)
	for row := range rows {
		matrix[row] = make([]int, cols)
		i := rows - row
		for col := range cols {
			matrix[row][col] = i
			i++
		}
	}

	return matrix
}

func main() {
	rows := 10000
	cols := 10000
	matrix := createMatrix(rows, cols)
	result := isToeplitzMatrix(matrix)
	fmt.Printf("rows: %d, cols: %d, result: %v\n", rows, cols, result)
}
