#pragma once
#include <cmath>
class Introsort {
	int depthlimit;
	int size;
public :
	template<typename I>
	void introsort(I* tab, I left, I right)
	{
		//1.
		//2.
		//3.
		//4.
		//5.

	}





	template<typename I>
	void depthcalcu(I right)
	{
		this->depthlimit = (int)std::floor(std::log10(right));
	}

	template<typename I>
	void Insertionsort(I* tab,I left,I right)
	{
		for(int i=left;i<=right;i++)
		{
			I key = tab[i];
			int j = i;
			while(j>left&&a[j-1]>key)
			{
				a[j] = a[j - 1];
				j--;

			}
			a[j] = key;
		}
	}
	
	template<typename I>
	void Heapsort(I* tab, I left, I right)
	{
	
	}

	template<typename I>
	void Heaptree(I* tab, I left, I right)
	{
	
	}

	template<typename I>
	void Partition(I* tab,I left,I right)
	{
	
	}
};
