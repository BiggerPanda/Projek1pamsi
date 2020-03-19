#pragma once
#include <iostream>
auto swap = [](auto& numb1, auto& numb2)
{
	auto temp = numb1;
	numb1 = numb2;
	numb2 = temp;
};


class QuicksSort {
	int size;
public:
	
	template<typename I>
	int Partition(I* tab, int left, int right)
	{
		I pivot = tab[(left + right) / 2];
		int i = left - 1;
		int j = right + 1;
		while (true)
		{

			while (pivot > tab[++i]);

			while (pivot < tab[--j]);

			if (i >= j) {
				return j;
			}
			swap(tab[i],tab[j]);

		}
	}

	template<typename I>
	void quicksort_al(I* tab, int left, int right)
	{
		if (left<right)
		{
			int pivot = Partition(tab, left, right);
			quicksort_al(tab, left, pivot);
			quicksort_al(tab, pivot + 1, right);
		
		}

	}
};