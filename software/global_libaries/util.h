#pragma once

#include <iostream>
#include <string>

namespace util {

	void swap(int* a, int* b) {
		int temp = *a;
		*a = *b;
		*b = temp;
	}

	void printArray(int * array, int size) {
		std::cout << '[';
		for (int i = 0; i < size - 1; i++) {
			std::cout << array[i] << ", ";
		}
		std::cout << array[size - 1] << ']' << std::endl;
	}

}