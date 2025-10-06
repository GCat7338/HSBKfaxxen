#pragma once

#include <iostream>
#include <string>
using std::string;

namespace util {

	void swap(int* a, int* b) {
		int temp = *a;
		*a = *b;
		*b = temp;
	}

	void printArray(int * array, int size) {
		string ret = "[";
		for (int i = 0; i < size - 1; i++) {
			ret += std::to_string(array[i]) + ", ";
		}
		ret += std::to_string(array[size - 1]) + "]";
		std::cout << ret << std::endl;
	}

	void shuffleArray(int* array, int size) {
		for (int i = size - 1; i > 0; --i) {
			int j = std::rand() % (i + 1);
			swap(&array[i], &array[j]);
		}
	}

	bool isArraysSorted(int* array, int size) {
		for (int i = 0; i < size - 1; i++) {
			if (array[i] > array[i + 1]) return false;
		}
		return true;
	}
}