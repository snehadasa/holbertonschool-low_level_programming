#include "sort.h"

/**
 * partition_lomuto_sort - quick sort
 */
int partition_lomuto_sort(int *array, int low, int high)
{
	int current_low = low;
	int current_high = high;
	int pivot = array[high];

	while (current_low < current_high)
	{
		while (current_low < current_high && array[current_low] < pivot)
		{
			current_low++;
			printf("current_low: %d\n", current_low);
		}
		while (current_low < current_high && array[current_high] >= pivot)
		{
			current_high--;
			printf("current_high: %d\n", current_high);
		}
		swap(&array[current_low], &array[current_high]);
	}
	swap(&array[current_high], &array[high]);
	return (current_high);
}

/**
 */
void quick_sort(int *array, size_t size)
{
	size_t p;

	p = partition_lomuto_sort(array, 0, size - 1);

	quick_sort(array, p - 1);
	quick_sort(array, p + 1);
}
