#include "sort.h"
/**
* bubble_sort - sorts an array of integers in ascending order
*
* @array: array of integers
*
* @size: size of the array
*
* Return: no return
*/
void bubble_sort(int *array, size_t size)
{
	unsigned int i = 0, num_checker = 0;
	int temp = 0;

	if (array == NULL)
		return;

	for (num_checker = 0; num_checker < size - 1; num_checker++)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
