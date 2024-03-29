#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (success)
 */
void print_diagsums(int *a, int size)
{
	int sum 1, sum 2, y;
	sum 1 = 0;
	sum 2 = 0;

	for (y = 0; y < size; y++)
	{
		sum 1 = sum 1 + a[y * size + y];
	}
	for (y = size - 1; y > 0; y--)
	{
		sum 2 + = a[y * size + (size - y - 1)];
	}
	printf("%d, %d\n", sum 1, sum 2);
}
