#include "IntigerArr.h"




IntigerArr::IntigerArr()
{
	
	std::cout << "TAB ++" << std::endl;
}

void IntigerArr::randomize(int _size, double percent)
{
	this->setsize(size);
	
	for (int i = 0; i < _size; i++)
	{
		this->tab[i] = std::rand();
	}
}

void IntigerArr::setsize(int size)
{
	this->size = size;
}

void IntigerArr::setmemory(int size)
{
	if (this->size==0)
	{
		std::cout << "memory cant be alocated";
	}
	else
	{
		this->tab = new int[this->size];
	}
}

IntigerArr::~IntigerArr()
{
	//for (int i = 0; i < this->size; i++)
	//{
	//	std::cout << tab[i] << " ";
	//}

	delete[] this->tab;
	std::cout << "TAB --"<< std::endl;
}



Arrofarr::Arrofarr(int _size,double rand)
{ 
	std::cout << "Arr++";
	
	
		this->size = _size;
		this->arr = new IntigerArr[this->amount]();
		for (int i = 0; i < amount; i++)
		{
			this->arr[i].setsize(size);
			this->arr[i].setmemory(size);
			this->arr[i].randomize(size,rand);

		}
		
	
}

void Arrofarr::Quicks()
{
	for (int i = 0; i < this->amount; i++)
	{
		this->q.quicksort_al(this->arr[i].tab, 0, this->arr->size - 1);
		this->arr[i].isSorted();
	}
}


void Arrofarr::Merge()
{
	for (int i = 0; i < this->amount; i++)
	{
		
		int* tab_pom = new int[this->arr[i].size];
		this->m.divideandsort(this->arr[i].tab, 0, this->arr->size - 1,tab_pom);
		this->arr[i].isSorted();
		delete[] tab_pom;
	}
}

void Arrofarr::Intro()
{
	for (int i = 0; i < this->amount; i++)
	{
		this->in.introsort_al(this->arr[i].tab, 0, this->arr->size - 1,in.depthlimit);
		this->arr[i].isSorted();
	}
}

Arrofarr::~Arrofarr()
{
	delete[] this->arr;
	std::cout << "Arr--";
}
