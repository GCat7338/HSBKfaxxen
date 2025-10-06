#include <iostream>
#include <time.h>

#include "./../../global_libaries/sort/sort.h"

int main() {
	int array[20];
	srand(time(0));

	for (int i = 0; i < 20; i++) {
		array[i] = rand() % 100;
	}

	util::printArray(array, 20);

	sort::bubbleSort(array, 20);

	util::printArray(array, 20);

	return 0;
}