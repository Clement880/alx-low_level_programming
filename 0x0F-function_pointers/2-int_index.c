#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: int holding target array
 * @size: size of array
 * @cmp: pointer function compares the search int
 *
 * Return: (-1) if size (<=0), match int element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int t = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (t < size)
			{
				if (cmp(array[t]))
					return (t);
				t++;
			}
		}

	}
	return (-1);
}
