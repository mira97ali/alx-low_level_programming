#include "search_algos.h"


/**
 * binary_search - Searches for a specific value in a sorted array of integers
 * using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Note:
 * The function assumes the value does not appear more than once in the array.
 * If the value is not present in the array or if the array is NULL, return -1.
 *
 * Return: The index where the value is located.
 *         If not found, returns -1.
 */
int binary_search(int *array, size_t size, int value)
{
	return (binary_search_index(array, 0, size - 1, value));
}


/**
 * print_array - Outputs the elements of an integer array.
 * @array: The array whose elements are to be printed.
 * @l: The left boundary index of the segment to be printed.
 * @r: The right boundary index of the segment to be printed.
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t item;

	if (array)
	{
		printf("Searching in array: ");
		for (item = l; item < l + (r - l + 1); item++)
			printf("%d%s", *(array + item), item < l + (r - l) ? ", " : "\n");
	}
}


/**
 * binary_search_index - Auxiliary recursive function for binary_search.
 * @array: Pointer to the first element of the array to search in.
 * @l: Left boundary index of the current search segment.
 * @r: Right boundary index of the current search segment.
 * @value: Value to search for.
 *
 * Note:
 * The function assumes the value does not appear more than once in the array.
 * If the value is not present in the array or if the array is NULL, return -1.
 *
 * Return: The index where the value is located.
 *         If not found, returns -1.
 */
int binary_search_index(int *array, size_t l, size_t r, int value)
{
	int midway;

	if (!array || l > r)
		return (-1);
	print_array(array, l, r);

	midway = l + (r - l) / 2;

	if (l == r)
		return (*(array + midway) == value ? (int)midway : -1);

	if (array[midway] == value)
		return (midway);
	else if (array[midway] > value)
		return (binary_search_index(array, l, midway - 1, value));
	else
		return (binary_search_index(array, midway + 1, r, value));
}


