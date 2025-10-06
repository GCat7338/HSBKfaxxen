#include <iostream>
#include <time.h>

#include "./../../global_libaries/sort/sort.h"

int main() {
	int array[10];
	srand(time(0));

	for (int i = 0; i < 10; i++) {
		array[i] = rand() % 100;
	}

	util::printArray(array, 10);

	//sort::bubbleSort(array, 10);
	std::cout << sort::bogoSort(array, 10) << std::endl;

	util::printArray(array, 10);

	return 0;
}