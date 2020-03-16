#pragma once
#include <cstdlib>
#include <iostream>
#include <chrono>
#include "Introsort.h"
#include "Quicksort.h"
#include "Divideandconquest.h"

auto Compsmtbig = [](auto& a, auto& b) {return a <= b; };
auto Compbigtosm = [](auto& a, auto& b) {return a >= b; };

class IntigerArr
{
public:
	
	int *tab;
	IntigerArr();
	void randomize(int size,double percent);
	void setmemory(int size);
	~IntigerArr();

	
	void isSorted(int size) 
	{
		for (int count = 0; count < size; count++)
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
	
	double Quicks();
	double Merge();
	double Intro();
	~Arrofarr();
};

