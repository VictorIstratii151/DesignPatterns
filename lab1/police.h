#pragma once
#include "force_structure.h"
#include <iostream>

using namespace std;

class ParkPolice : public ForceStructure
{
public:
	void report()
	{
		cout << "Park police with id " << id << " reporting!" << endl;
	}
};

class HighWayPatrol : public ForceStructure
{
public:
	void report()
	{
		cout << "Park police with id " << id << " reporting!" << endl;
	}
};

class SWAT : public ForceStructure
{
public:
	void report()
	{
		cout << "Park police with id " << id << " reporting!" << endl;
	}
};

class StateTroopers : public ForceStructure
{
public:
	void report()
	{
		cout << "Park police with id " << id << " reporting!" << endl;
	}
};