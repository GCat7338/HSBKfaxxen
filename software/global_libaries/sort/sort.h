#pragma once

#include "./../util.h"

namespace sort {

	void insertionSort(int arr[], int arrSize) {
		int val, j;
		for (int i = 1; i < arrSize; i++) {
			val = arr[i];
			j = i;
			while (j > 0 && arr[j - 1] > val) {
				arr[j] = arr[j - 1];
				j--;
			}
			arr[j] = val;
		}
	}

	void bubbleSort(int arr[], int arrSize) {
		int merker;
		do {
			merker = 0;
			for (int i = 0; i < arrSize - 1; i++) {
				if (arr[i] > arr[i + 1]) {
					util::swap(&arr[i], &arr[i + 1]);
					merker = 1;
				}
			}
		} while (merker == 1);
	}
}