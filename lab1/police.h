#pragma once
#include "force_structure.h"

class ParkPolice : public ForceStructure
{
public:
	void report()
	{
		cout << "Park police with id " << id << " reporting!" << endl;
	}

	ForceStructure * clone()
	{
		return new ParkPolice;
	}
};

class HighwayPatrol : public ForceStructure
{
public:
	void report()
	{
		cout << "Highway Patrol with id " << id << " reporting!" << endl;
	}

	ForceStructure * clone()
	{
		return new HighwayPatrol;
	}
};

class SWAT : public ForceStructure
{
public:
	void report()
	{
		cout << "SWAT with id " << id << " reporting!" << endl;
	}

	ForceStructure * clone()
	{
		return new SWAT;
	}
};

class StateTroopers : public ForceStructure
{
public:
	void report()
	{
		cout << "State Troopers with id " << id << " reporting!" << endl;
	}

	ForceStructure * clone()
	{
		return new StateTroopers;
	}
};