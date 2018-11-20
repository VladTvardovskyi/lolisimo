#pragma once
#include <iostream>
#include <string>

using namespace std;

class Dishwatermachine
{
private:
	int waterlost;
	int number_of_programs;
	int number_of_sets;
protected:
	int ultra;
	int machine;
public:
	
	int Getwaterlost()
	{
		return waterlost;
	}

	void Setwaterlost(int valuewaterlost)
	{
		waterlost = valuewaterlost;
	}

	int Getnumber_of_programs()
	{
		return number_of_programs;
	}

	void Setnumber_of_programs(int valuenumer_of_programs)
	{
		number_of_programs = valuenumer_of_programs;
	}

	int Getnumber_of_sets()
	{
		return number_of_sets;
	}


	void Setnumber_of_sets(int valuenumber_of_sets)
	{
		number_of_sets = valuenumber_of_sets;
	}

	string name;
 

	
	void Printf()
	{
		cout << "waterlost=" << waterlost << "\t number_of_programs=" << number_of_programs << "\t name=" << name << "\t number_of_sets=" << number_of_sets << endl << endl;
	}
};



