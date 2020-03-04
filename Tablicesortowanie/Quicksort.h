#pragma once
#include <iostream>

auto swap = [](auto &numb1, auto &numb2) 
{
	auto temp = numb1;
	numb1 = numb2;
	numb2 = temp;
};

template<typename I>
void quicksort_al(I* tab, I left, I right)
{
	if (right <= left)
	{
		return;
	}
	I pivot = tab[(left + right) / 2];
	I i = left - 1;
	I j = right + 1;
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
