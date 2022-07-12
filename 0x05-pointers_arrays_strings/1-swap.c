/**
 * swap_int - swaps the value of two integers using two input parameters
 *
 * @a: parameter 1
 * @b: parameter 2
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;
temp = *a;
*a = *b;
*b = temp;
}

