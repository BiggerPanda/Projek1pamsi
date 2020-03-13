#include "IntigerArr.h"




IntigerArr::IntigerArr()
{
	
	
}

void IntigerArr::randomize(int _size, double percent)
{
	this->setsize(size);
	int restofsize = size - size * (percent / 100);
	if (percent >= 0) {
		for (int i = 0; i < _size; i++)
		{
			if (i < restofsize)
			{
				this->tab[i] = std::rand();
			}
			else
			{
				this->tab[i] = i;
			}
		}
	}
	else if (percent<0)
	{
		for (int i = size; i >= 0; i--)
		{
						
				this->tab[size-i] = i;
			
		}
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
	
}



Arrofarr::Arrofarr(int _size,double rand)
{ 
	
	
	
		this->size = _size;
		this->arr = new IntigerArr[this->amount]();
		if (rand == 0) 
		{
			for (int i = 0; i < amount; i++)
			{
				this->arr[i].setsize(size);
				this->arr[i].setmemory(size);
				this->arr[i].randomize(size, rand);
			}
		}
		else if (rand==25)
		{
			for (int i = 0; i < amount; i++)
			{
				this->arr[i].setsize(size);
				this->arr[i].setmemory(size);
				this->arr[i].randomize(size, rand);
			}
		}
		else if (rand == 50)
		{
			for (int i = 0; i < amount; i++)
			{
				this->arr[i].setsize(size);
				this->arr[i].setmemory(size);
				this->arr[i].randomize(size, rand);
			}
		}
		else if (rand == 75)
		{
			for (int i = 0; i < amount; i++)
			{
				this->arr[i].setsize(size);
				this->arr[i].setmemory(size);
				this->arr[i].randomize(size, rand);
			}
		}
		else if (rand == 95)
		{
			for (int i = 0; i < amount; i++)
			{
				this->arr[i].setsize(size);
				this->arr[i].setmemory(size);
				this->arr[i].randomize(size, rand);
			}
		}
		else if (rand == 99)
		{
			for (int i = 0; i < amount; i++)
			{
				this->arr[i].setsize(size);
				this->arr[i].setmemory(size);
				this->arr[i].randomize(size, rand);
			}
		}
		else if (rand == 99.7)
		{
			for (int i = 0; i < amount; i++)
			{
				this->arr[i].setsize(size);
				this->arr[i].setmemory(size);
				this->arr[i].randomize(size, rand);
			}
		}
		else if (rand < 0)
		{
			for (int i = 0; i < amount; i++)
			{
				this->arr[i].setsize(size);
				this->arr[i].setmemory(size);
				this->arr[i].randomize(size, rand);
			}
		}
	
}

void Arrofarr::Quicks()
{
	double timeaver = 0.0;
	for (int i = 0; i < this->amount; i++)
	{
		std::chrono::high_resolution_clock clock;
		auto start = clock.now();
		this->q.quicksort_al(this->arr[i].tab, 0, this->arr->size - 1);
		auto end = clock.now();
		auto timespan = static_cast<std::chrono::duration<double>>(end - start);
		timeaver += timespan.count();
		this->arr[i].isSorted();
	}
	std::cout << (timeaver / (double)this->amount) << std::endl;
}


void Arrofarr::Merge()
{
	double timeaver = 0.0;

	for (int i = 0; i < this->amount; i++)
	{
		
		int* tab_pom = new int[this->arr[i].size];
		std::chrono::high_resolution_clock clock;
		auto start = clock.now();
		this->m.divideandsort(this->arr[i].tab, 0, this->arr->size - 1,tab_pom);
		auto end = clock.now();
		auto timespan = static_cast<std::chrono::duration<double>>(end - start);
		timeaver += timespan.count();
		this->arr[i].isSorted();
		delete[] tab_pom;
	}
	std::cout << (timeaver / (double)this->amount)<<std::endl;
}

void Arrofarr::Intro()
{
	double timeaver = 0.0;
	for (int i = 0; i < this->amount; i++)
	{
		std::chrono::high_resolution_clock clock;
		auto start = clock.now();
		this->in.introsort_al(this->arr[i].tab, 0, this->arr->size - 1,in.depthlimit);
		auto end = clock.now();
		auto timespan = static_cast<std::chrono::duration<double>>(end - start);
		timeaver += timespan.count();
		this->arr[i].isSorted();
	}
	std::cout << (timeaver / (double)this->amount) << std::endl;
}

Arrofarr::~Arrofarr()
{
	delete[] this->arr;
	
}
