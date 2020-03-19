#pragma once
#include <cmath>
#include"Quicksort.h"


class Introsort {
	QuicksSort q;
	int size;
public :
	int depthlimit= (int)std::floor(2 * std::log2(this->size));
	template<typename I>
	void introsort(I* tab, int left, int right,int depthlimit)
	{
		
		if(right-left>16)
		{
			if (this->depthlimit==0)
			{
				Heapsort(tab, left, right);
			}
			this->depthlimit--;
			I p = this->Partition(tab, left, right);
			introsort(tab, p+1, right, this->depthlimit);
			introsort(tab, left, p, this->depthlimit);
		}
		else
		{
			Insertionsort(tab, left, right);
		}
		

	}

	template<typename I>
	void introsort_al(I* tab, int left, int right, int depthlimit)
	{
		depthcalcu(right);
		introsort(tab, left, right, this->depthlimit);
	}





	template<typename I>
	void depthcalcu(I right)
	{
		this->depthlimit = (int)std::floor(2*std::log2(right));
	}

	template<typename I>
	void Insertionsort(I* tab,int left,int right)
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
	void Heapsort(I* tab, int left, int right)
	{
		
		++right;
		I* temporary = new I[right - left];
		for(int i = 0;i<right-left;i++)
		{
			temporary[i] = tab[left + i];
		}
		for (int i = (right - left) / 2 - 1; i >= 0; i--)
		{
			Heaptree(temporary, left, right, i);
		}
		for (int i = (right - left) / 2 - 1; i >= 0; i--)
		{
			swap(temporary[0], temporary[i]);
			Heaptree(temporary, 0, i, 0);
		}
		for (int i = 0; i < right - left; i++)
		{
			tab[left + i] = temporary[i];
		}
		delete[] temporary;
	}

	template<typename I>
	void Heaptree(I* tab, int left, int right,int heapN)
	{
		int size = right - left;
		int largest = heapN;
		int child_left = 2 * heapN + 1;
		int child_right = 2 * heapN + 2;

		if (child_left<size&& tab[child_left]>tab[largest])
		{
			largest = child_left;
		}
		if (child_right<size&&tab[child_right]>tab[largest])	
		{
			largest = child_right;
		}
		if(largest!=heapN)
		{
			swap(tab[heapN], tab[largest]);
			Heaptree(tab, left, right, largest);
		}

	}

	template<typename I>
	int Partition(I* tab, int left, int right)
	{
		I pivot = tab[(left + right) / 2];
		I i = left - 1;
		I j = right + 1;
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
};
