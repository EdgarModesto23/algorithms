build:
	clang++  -std=c++20 -o ./dist/algorithms.out ./cmd/main.cpp ./cmd/insertion_sort.cpp

insertionSort:
	./dist/algorithms.out A

