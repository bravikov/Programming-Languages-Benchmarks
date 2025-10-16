# Programming Languages Benchmarks

Tasks:
- Toeplitz Matrix ([LeetCode Task](https://leetcode.com/problems/toeplitz-matrix/description/)) — generates a large Toeplitz-like matrix and verifies that all top-left to bottom-right diagonals contain the same value, prints the result.

Build:

    clang++ -O2 -o build/cpp-toeplitz-matrix src/cpp/toeplitz-matrix/main.cpp
    go build -o build/go-toeplitz-matrix src/go/toeplitz-matrix/main.go

Run:

    time ./build/cpp-toeplitz-matrix
    time ./build/go-toeplitz-matrix
