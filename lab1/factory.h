#pragma once
#include "police.h"
#include <string>

class Factory 
{
public:
	virtual ForceStructure * createMunicipalStructure() = 0;
	virtual ForceStructure * createRegionalStructure() = 0;
};

class SimplePoliceFactory : public Factory
{
public:
	ForceStructure * createMunicipalStructure()
	{
		return new ParkPolice;
	}
	ForceStructure * createRegionalStructure()
	{
		return new HighwayPatrol;
	}
};

class SpecialPoliceFactory : public Factory
{
public:
	ForceStructure * createMunicipalStructure()
	{
		return new SWAT;
	}
	ForceStructure * createRegionalStructure()
	{
		return new StateTroopers;
	}
};