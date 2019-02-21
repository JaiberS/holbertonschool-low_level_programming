/**
 * reverse_array - inverts the values of an array
 *@a: array to be reversed
 *@n: number of elements of the array
 *
 */

void reverse_array(int *a, int n)
{
	int j[n], i = 0, s = 0;

	for (; s != n; s++)
		j[s] = a[s];
	for (; n >= 0; n--)
	{
		a[i] = j[n - 1];
		i++;
	}
}
