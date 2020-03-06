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

IntigerArr::~IntigerArr()
{
	for (int i = 0; i < 500; i++)
	{
		std::cout << tab[i] << " ";
	}

	delete this->tab;
	std::cout << "TAB --"<< std::endl;
}

Arrofarr::Arrofarr()
{
}

Arrofarr::~Arrofarr()
{
}
