build:
	clang++  -std=c++20 -o ./dist/algorithms.out ./cmd/main.cpp ./cmd/insertion_sort.cpp ./cmd/search.cpp

insertionSort:
	./dist/algorithms.out A

reverseInsertionSort:
	./dist/algorithms.out B

binarySearch:
	./dist/algorithms.out C

