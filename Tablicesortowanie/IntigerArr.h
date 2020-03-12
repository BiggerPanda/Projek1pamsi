#pragma once
#include <cstdlib>
#include <iostream>
#include "Introsort.h"
#include "Quicksort.h"
#include "Divideandconquest.h"

auto Compsmtbig = [](auto& a, auto& b) {return a <= b; };
auto Compbigtosm = [](auto& a, auto& b) {return a >= b; };

class IntigerArr
{
public:
	int size = 0;
	int *tab;
	IntigerArr();
	void randomize(int size,double percent);
	void setsize(int size);
	void setmemory(int size);
	~IntigerArr();

	
	void isSorted() 
	{
		for (int count = 0; count < this->size; count++)
		{

			if(Compsmtbig(this->tab[count - 1], this->tab[count]))
			{
			 //do nothing
			}
			else if(count==0)
			{
				// do nothing
			}
			else
			{
				std::cout << "not sorted well";
				break;
			}
		}
	}
};


class Arrofarr
{ public:
	int size = 0;
	const int amount = 100;
	IntigerArr* arr ;
	QuicksSort q;
	Mergesort m;
	Introsort in;
	Arrofarr(int size,double rand);
	void Quicks();
	void Merge();
	void Intro();
	~Arrofarr();
};

