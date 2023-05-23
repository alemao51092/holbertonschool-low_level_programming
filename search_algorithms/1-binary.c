#include "search_algos.h"

int
binary_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, mid, printer;

	while (low <= high)
	{
		mid = low + (high - low) / 2;

		printf("Searching in array: ");
		for (printer = low; printer <= high; printer++)
		{
			printf("%d", array[printer]);
			if (printer < high)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
