#pragma once
#include <string>
#include <fstream>
#include <cstdlib>
class Menu
{
	const std::string PATH = "L:\Pamsi";
	double time_quick;
	double time_merge;
	double time_intro;

public: 
	void savetime(double time);
	void WritetoFile();
	void Create();
	void SaveFile();
};

