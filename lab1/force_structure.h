#pragma once
#include <iostream>
#include <string>

using namespace std;

class ForceStructure
{
public:
	ForceStructure()
	{
		id = total++;
	}
	virtual void report() = 0;
	virtual ForceStructure * clone() = 0;

protected:
	int id;
	static int total;
};
