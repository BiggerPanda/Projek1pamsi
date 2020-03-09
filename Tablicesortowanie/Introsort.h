#pragma once
#include <cmath>
#include"Quicksort.h"


class Introsort {
	
	int size;
public :
	int depthlimit=0;
	template<typename I>
	void introsort_al(I* tab, I left, I right,I depthlimit)
	{
		depthcalcu(right);
		if(right-left>16)
		{
			if (this->depthlimit==0)
			{
				Heapsort(tab, left, right);
			}
			this->depthlimit--;
			I pivot = tab[(left + right) / 2];
			swap(pivot,tab[right]);
			I p = this->Partition(tab, left, right);
			introsort_al(tab, p+1, right, this->depthlimit);
			introsort_al(tab, left, p-1, this->depthlimit);
		}
		else
		{
			Insertionsort(tab, left, right);
		}

	}





	template<typename I>
	void depthcalcu(I right)
	{
		this->depthlimit = (int)std::floor(2*std::log10(right));
	}

	template<typename I>
	void Insertionsort(I* tab,I left,I right)
	{
		for(int i=left;i<=right;i++)
		{
			I key = tab[i];
			int j = i;
			while(j>left&&tab[j-1]>key)
			{
				tab[j] = tab[j - 1];
				j--;

			}
			tab[j] = key;
		}
	}
	
	template<typename I>
	void Heapsort(I* tab, I left, I right)
	{
		I heapN =int(right - left);
		Heaptree(tab, left, right, heapN);
		for (int i = heapN; i >= 1; i--)
		{
			I templeft = left + 1;
			swap(left, templeft);

			int temp = tab[left + i - 1];
			int child;
			while (i <= heapN / 2)
			{
				child = 2 * i;
				if (child < heapN && tab[left + child - 1] < tab[left + child + 1])
				{
					child++;
				}
				if (temp >= tab[left + child - 1])
				{
					break;

				}
				tab[left + i - 1] = tab[left + child - 1];
				i = child;
			}
			tab[left + i - 1] = temp;
		}

	}

	template<typename I>
	void Heaptree(I* tab, I left, I right,I heapN)
	{
		for (int i = heapN/2; i>=1; i--)
		{
			int temp = tab[left + i - 1];
			int child;
			while(i<=heapN/2)
			{
				child = 2 * i;
				if (child < heapN && tab[left + child - 1] < tab[left + child + 1])
				{
					child++;
				}
				if (temp>=tab[left+child-1])
				{
					break;

				}
				tab[left + i - 1] = tab[left + child - 1];
				i = child;
			}
			tab[left + i - 1] = temp;
		}

	}

	template<typename I>
	I Partition(I* tab, I left, I right)
	{
		I i, j;
	
		I pivot = tab[(left + right) / 2];
		i = (left - 1);
		for (j=left; j < right; j++)
		{
			if (tab[j] < pivot) {
				i++;
				swap(tab[i], tab[j]);
			}
		}
		swap(tab[i + 1], tab[right]);
		return (i + 1);
	}
};
