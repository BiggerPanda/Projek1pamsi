#pragma once
#include <cstdlib>
#include <iostream>

class IntigerArr
{
	int size=0;
public:
	int *tab;
	IntigerArr(int size);
	~IntigerArr();
};


class Arrofarr
{
	const int amount = 100;
	IntigerArr* Arr;
	Arrofarr();
	~Arrofarr();
};

