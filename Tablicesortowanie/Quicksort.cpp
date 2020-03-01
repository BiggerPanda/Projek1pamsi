#include "Quicksort.h"

void quicksort_al(int* tab, int left, int right)
{
	if (right <= left)
	{
		return;
	}
	int pivot = tab[(left + right) / 2];
	int i = left - 1;
	int j = right + 1;
	while (true)
	{

		while (pivot > tab[++i]);

		while (pivot < tab[--j]);

		if (i <= j)
		{
			swap(tab[i], tab[j]);
		}
		else
		{
			break;
		}



	}
	if (j > left)
	{
		quicksort_al(tab, left, j);
	}
	if (i < right)
	{
		quicksort_al(tab, i, right);
	}
}