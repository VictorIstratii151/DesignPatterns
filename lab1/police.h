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

class HighwayPatrol : public ForceStructure
{
public:
	void report()
	{
		cout << "Highway Patrol with id " << id << " reporting!" << endl;
	}
};

class SWAT : public ForceStructure
{
public:
	void report()
	{
		cout << "SWAT with id " << id << " reporting!" << endl;
	}
};

class StateTroopers : public ForceStructure
{
public:
	void report()
	{
		cout << "State Troopers with id " << id << " reporting!" << endl;
	}
};