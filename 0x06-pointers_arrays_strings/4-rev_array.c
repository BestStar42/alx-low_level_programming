#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * reverse_array -> reversing an array
 * @a: an array
 * @n: elemnt of an array
 */
void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	aux = 1;

	p = a;

	for (i = 0; i < n; i++)
		p++;

	for (k = 0; k < i / 2; k++)

	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}
