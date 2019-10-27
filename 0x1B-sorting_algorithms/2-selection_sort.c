#include "sort.h"
/**
* selection_sort - sorts an array of integers in ascending order
*
* @array: array of integers
*
* @size: size of the array
*
* Return: no return
*/
void selection_sort(int *array, size_t size)
{
	unsigned int num = 0, minor_num = 0, i = 0;
	int temp = 0;

	if (array == NULL)
		return;

	for (num = 0; num < size; num++)
	{
		minor_num = num;

		for (i = num + 1; i < size; i++)
		{
			if  (array[minor_num] > array[i])
				minor_num = i;
		}
		if (minor_num != num)
		{
			temp = array[num];
			array[num] = array[minor_num];
			array[minor_num] = temp;
			print_array(array, size);
		}
	}
}
