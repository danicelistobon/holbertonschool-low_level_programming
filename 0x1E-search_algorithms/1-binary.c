#include "search_algos.h"
/**
* binary_search - searches for a value in a sorted array of integers
*
* @array: pointer to the first element of the array to search
*
* @size: number of elements in array
*
* @value: value to search for
*
* Return: the index where value is located, if value is not present in array or
* if array is NULL, your function must return -1
*/
int binary_search(int *array, size_t size, int value)
{
	unsigned int i = 0, begin = 0, end = size - 1, m = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (1)
	{
		printf("Searching in array: ");

		for (i = begin; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		if (begin > end)
			return (-1);

		m = (begin + end) / 2;

		if (value == array[m])
			return (m);

		else if (begin == end)
			return (-1);

		else if (array[m] < value)
			begin = m + 1;

		else
			end = m - 1;
	}
}
