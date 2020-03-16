#include "IntigerArr.h"




IntigerArr::IntigerArr()
{
	
	//std::cout << "tab++";
}

void IntigerArr::randomize(int _size, double percent)
{
	
	int restofsize = _size - _size * (percent / 100);
	if (percent >= 0) {
		for (int i = 0; i < _size; i++)
		{
			if (i < restofsize)
			{
				tab[i] = (std::rand()/100)+1;
			}
			else
			{
				tab[i] = i;
			}
		}
	}
	else if (percent<0)
	{
		for (int i = _size; i >= 0; i--)
		{
						
				tab[_size-i] = i;
			
		}
	}

}



void IntigerArr::setmemory(int _size)
{
	if (_size==0)
	{
		std::cout << "memory cant be alocated";
	}
	else if (_size<100000)
	{
		tab = new int[_size*10];
	}
	else if (_size >= 100000)
	{
		tab = new int[_size * 2];
	}
}

IntigerArr::~IntigerArr()
{
	//for (int i = 0; i < this->size; i++)
	//{
	//	std::cout << tab[i] << " ";
	//}

	delete[] tab;
	
}



Arrofarr::Arrofarr(int _size,double rand)
{ 
	
	
	
		this->size = _size;
		this->arr = new IntigerArr[this->amount]();
		if (rand == 0) 
		{
			for (int i = 0; i < amount; i++)
			{
				
				this->arr[i].setmemory(size);
				this->arr[i].randomize(size, rand);
			}
		}
		else if (rand==25)
		{
			for (int i = 0; i < amount; i++)
			{
				
				this->arr[i].setmemory(size);
				this->arr[i].randomize(size, rand);
			}
		}
		else if (rand == 50)
		{
			for (int i = 0; i < amount; i++)
			{
				
				this->arr[i].setmemory(size);
				this->arr[i].randomize(size, rand);
			}
		}
		else if (rand == 75)
		{
			for (int i = 0; i < amount; i++)
			{
				
				this->arr[i].setmemory(size);
				this->arr[i].randomize(size, rand);
			}
		}
		else if (rand == 95)
		{
			for (int i = 0; i < amount; i++)
			{
				
				this->arr[i].setmemory(size);
				this->arr[i].randomize(size, rand);
			}
		}
		else if (rand == 99)
		{
			for (int i = 0; i < amount; i++)
			{
				
				this->arr[i].setmemory(size);
				this->arr[i].randomize(size, rand);
			}
		}
		else if (rand == 99.7)
		{
			for (int i = 0; i < amount; i++)
			{
				
				this->arr[i].setmemory(size);
				this->arr[i].randomize(size, rand);
			}
		}
		else if (rand < 0)
		{
			for (int i = 0; i < amount; i++)
			{
				
				this->arr[i].setmemory(size);
				this->arr[i].randomize(size, rand);
			}
		}
	
}

double Arrofarr::Quicks()
{
	double timeaver = 0.0;
	for (int i = 0; i < this->amount; i++)
	{
		std::chrono::high_resolution_clock clock;
		auto start = clock.now();
		this->q.quicksort_al(this->arr[i].tab, 0, this->size - 1);
		auto end = clock.now();
		auto timespan = static_cast<std::chrono::duration<double>>(end - start);
		timeaver += timespan.count();
		this->arr[i].isSorted(this->size);
	}
	return timeaver;
}


double Arrofarr::Merge()
{
	double timeaver = 0.0;

	for (int i = 0; i < this->amount; i++)
	{
		
		int* tab_pom = new int[this->size];
		std::chrono::high_resolution_clock clock;
		auto start = clock.now();
		this->m.divideandsort(this->arr[i].tab, 0, this->size - 1,tab_pom);
		auto end = clock.now();
		auto timespan = static_cast<std::chrono::duration<double>>(end - start);
		timeaver += timespan.count();
		this->arr[i].isSorted(this->size);
		delete[] tab_pom;
	}
	return timeaver;
	
}

double Arrofarr::Intro()
{
	double timeaver = 0.0;
	for (int i = 0; i < this->amount; i++)
	{
		std::chrono::high_resolution_clock clock;
		auto start = clock.now();
		this->in.introsort_al(this->arr[i].tab, 0, this->size - 1,in.depthlimit);
		auto end = clock.now();
		auto timespan = static_cast<std::chrono::duration<double>>(end - start);
		timeaver += timespan.count();
		this->arr[i].isSorted(this->size);
	}
	return timeaver;
}

Arrofarr::~Arrofarr()
{
	std::cout << "arr--";
	delete[] this->arr;
	
}
