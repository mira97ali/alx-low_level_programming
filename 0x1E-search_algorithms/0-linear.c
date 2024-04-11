#include "search_algos.h"

/**
 * linear_search - find a specific value within an array of integers.
 *
 * @array: A pointer to the first element of the array being searched.
 * @size: The total number of elements in the array.
 * @value: The target value to search for within the array.
 *
 * Note:
 * If the target value not found in the array or if the array pointer NULL,
 * the function returns -1.
 *
 * Return: The index of the first occurrence of the target value in the array
 *         If not found, returns -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t item;

	if (!array || size <= 0)
		return (-1);

	for (item = 0; item < size; item++)
	{
		printf("Value checked array[%ld] = [%d]\n", item, array[item]);
		if (array[item] == value)
			return (item);
	}
	return (-1);
}
