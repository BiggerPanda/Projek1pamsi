#include "IntigerArr.h"



IntigerArr::IntigerArr(int _size)
{
	this->size = _size;
	this->tab = new int[_size];
	for (int i = 0; i < _size; i++)
	{
		tab[i] = std::rand();
	}
	std::cout << "TAB ++" << std::endl;
}
IntigerArr::IntigerArr()
{
	this->tab = new int[this->size];
	std::cout << "TAB ++" << std::endl;
}

IntigerArr::~IntigerArr()
{
	//for (int i = 0; i < this->size; i++)
	//{
	//	std::cout << tab[i] << " ";
	//}

	delete this->tab;
	std::cout << "TAB --"<< std::endl;
}



Arrofarr::Arrofarr(int _size)
{ 
	std::cout << "Arr++";
	
	for (int i = 0; i < this->amount; i++)
	{
		this->size = _size;
		this->arr = new IntigerArr[this->amount]();
		
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
}

void Arrofarr::Intro()
{
}

Arrofarr::~Arrofarr()
{
	std::cout << "Arr--";
}
