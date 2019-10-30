#include "sort.h"
/**
* shell_sort - sorts an array using the Knuth sequence                             *
* @array: array of integers
*
* @size: size of the array
*
* Return: no return
*/
void shell_sort(int *array, size_t size)
{
	unsigned int num = 0, i = 0, gap = 1, minor_num = 0;
	int temp = 0;

	if (array == NULL)
		return;

	while (gap < size)
		gap = gap * 3 + 1;

	while (gap > 1)
	{
		gap = (gap - 1) / 3;

		for (num = 0; num < size - 1; num++)
		{
			minor_num = num;

			for (i = num + gap; i < size; i++)
			{
				if  (array[minor_num] > array[i])
					minor_num = i;
			}
			if (minor_num != num)
			{
				temp = array[num];
				array[num] = array[minor_num];
				array[minor_num] = temp;
			}
		}
		print_array(array, size);
	}
}
