#pragma once
#include <iostream>

auto swap = [](int &numb1, int &numb2) 
{
	int temp = numb1;
	numb1 = numb2;
	numb2 = temp;
};

void quicksort_al(int* tab, int left, int right);
