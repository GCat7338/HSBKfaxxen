#include <iostream>
#include <time.h>

#include "./../../global_libaries/sort/sort.h"

int main() {
	int array[5];
	srand(time(0));

	for (int i = 0; i < 5; i++) {
		array[i] = rand() % 100;
	}

	util::printArray(array, 5);

	//sort::bubbleSort(array, 5);
	std::cout << sort::bogoSort(array, 5) << std::endl;

	util::printArray(array, 5);

	return 0;
}