// Tablicesortowanie.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "Quicksort.h"
#include "Divideandconquest.h"
#include"IntigerArr.h"
#include"Introsort.h"
#include "Menu.h"

std::string PATH = "L:/Pamsi/";
std::string EXTENSION = ".txt";
std::string NAME = "timecount";
std::string SORTNAMEquicksort = "quicksort";
std::string SORTNAMEmerge = "mergesort";
std::string SORTNAMEintrosort = "introsort";

void CreateFile(double time, Menu::typeOfSorting type, int size, double typeofarray)
{
	if (type ==Menu::Quick)
	{

		std::ofstream FILE_out(PATH + NAME + std::to_string(typeofarray) + SORTNAMEquicksort + std::to_string(size) + EXTENSION);
		FILE_out << time << std::endl << time / 100;
		FILE_out.close();
	}
	else if (type == Menu::Merge)
	{

		std::ofstream FILE_out(PATH + NAME + std::to_string(typeofarray) + SORTNAMEmerge + std::to_string(size) + EXTENSION);
		FILE_out << time << std::endl << time / 100;
		FILE_out.close();
	}

	else if (type == Menu::Intro)
	{

		std::ofstream FILE_out(PATH + NAME + std::to_string(typeofarray) + SORTNAMEintrosort + std::to_string(size) + EXTENSION);
		FILE_out << time << std::endl << time / 100;
		FILE_out.close();
	}



}

void Driver(Menu::typeOfSorting type,Arrofarr &arr,double typeOfArray)
{
	
	
	if (type == Menu::Quick)
	{
	
		CreateFile(arr.Quicks(),Menu::Quick,arr.size,typeOfArray);
	}
	else if (type == Menu::Merge)
	{
		
		CreateFile(arr.Merge(), Menu::Merge, arr.size, typeOfArray);
	}
	else if (type == Menu::Intro)
	{
		CreateFile(arr.Intro(), Menu::Intro, arr.size, typeOfArray);
	}
}

int main()
{
    
    
	int sizeOfArrays[] = { 10000,50000,100000,500000,1000000 };
	double typeofArray[] = { -1,0,25,50,75,95,99,99.7 };
    
   
	//for (auto y : typeofArray)
	//{
	//	for (auto x : sizeOfArrays)
	//	{
	//		Arrofarr* arr = new Arrofarr(x, y);
	//		Driver(Menu::Quick, *arr,y);
	//		delete arr;
	//		
	//	}
	//}

	//for (auto y : typeofArray)
	//{
	//	for (auto x : sizeOfArrays)
	//	{
	//		Arrofarr* arr = new Arrofarr(x, y);
	//		Driver(Menu::Merge, *arr, y);
	//		delete arr;

	//	}
	//}

	for (auto y : typeofArray)
	{
		for (auto x : sizeOfArrays)
		{
			Arrofarr* arr = new Arrofarr(x, y);
			Driver(Menu::Intro, *arr, y);
			delete arr;

		}
	}
  
 
      
   

   

        
   

        std::cin.ignore();
        std::cin.get();
        return 0;
 
   
}


