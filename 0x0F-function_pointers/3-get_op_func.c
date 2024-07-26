#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - returns a pointer to the corresponding function
 * @s: passed argument
 *
 * Return: pointer to the to the corresponding 
 * operator given as parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int i;

	i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
