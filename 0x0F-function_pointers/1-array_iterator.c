#include "function_pointers.h"
/**
 * array_iterator - function iterates through an array
 * @array: array target
 * @size: size of array
 * @action: function pointer to an array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}

}
