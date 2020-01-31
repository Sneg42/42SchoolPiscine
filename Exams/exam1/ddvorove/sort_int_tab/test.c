#include <stdio.h>

int sort_int_tab(int *tab, unsigned int size);

int main()
{
	int size = 7;
	int arr[7] = {4, 8, 2, 9, 7, 1, 11};
	int i = -1;
	sort_int_tab(arr, size);
	while (++i < size)
		printf("%d ", arr[i]);
	printf("\n");
}
