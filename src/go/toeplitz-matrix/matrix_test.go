package main

import (
	"reflect"
	"testing"
)

func TestCreateMatrixRectangular(t *testing.T) {
	got := createMatrix(2, 3)
	want := [][]int{
		{2, 3, 4},
		{1, 2, 3},
	}
	if !reflect.DeepEqual(got, want) {
		t.Fatalf("createMatrix(2, 3) = %v, want %v", got, want)
	}
}

func TestCreateMatrixSquare(t *testing.T) {
	got := createMatrix(3, 3)
	want := [][]int{
		{3, 4, 5},
		{2, 3, 4},
		{1, 2, 3},
	}
	if !reflect.DeepEqual(got, want) {
		t.Fatalf("createMatrix(3, 3) = %v, want %v", got, want)
	}
}

func TestIsToeplitzMatrixTrue(t *testing.T) {
	matrix := [][]int{
		{4, 5, 6},
		{3, 4, 5},
		{2, 3, 4},
		{1, 2, 3},
	}
	if !isToeplitzMatrix(matrix) {
		t.Fatalf("expected true for Toeplitz matrix, got false")
	}
}

func TestIsToeplitzMatrixFalse(t *testing.T) {
	matrix := [][]int{
		{1, 2, 3},
		{4, 9, 6},
		{7, 8, 9},
	}
	if isToeplitzMatrix(matrix) {
		t.Fatalf("expected false for non-Toeplitz matrix, got true")
	}
}
