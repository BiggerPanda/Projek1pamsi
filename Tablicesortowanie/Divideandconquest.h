#pragma once
#include <iostream>
#include <cstdlib>


class Mergesort {
	int size;
public:
	template<typename I>
	void merge(I* tab, int left, int right, int mid, I* tab_pom)
	{


		for (I i = left; i <= right; i++)
		{
			tab_pom[i] = tab[i];
		}

		I i = left;

		I j = mid + 1;


		for (I k = left; k <= right; k++)
		{
			if (i <= mid)
			{
				if (j <= right)
				{


					if (tab_pom[j] < tab_pom[i])
					{
						tab[k] = tab_pom[j++];
					}
					else
					{
						tab[k] = tab_pom[i++];

					}
				}
				else
				{
					tab[k] = tab_pom[i++];
				}
			}
			else
			{
				tab[k] = tab_pom[j++];
			}
		}
	}



	template<typename I>
	void divideandsort(I* tab, int left, int right, I* tab_pom)
	{
		if (right <= left) { return; }

		I mid = (left + right) / 2;

		divideandsort(tab, mid + 1, right, tab_pom);
		divideandsort(tab, left, mid, tab_pom);
		merge(tab, right, left, mid, tab_pom);

	}
};