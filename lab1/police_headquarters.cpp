#include "police_headquarters.h"

void PoliceHeadquarters::setPersonnel(int p)
{
	personnel = p;
}

int PoliceHeadquarters::getPersonnel() const
{
	return personnel;
}

PoliceHeadquarters * PoliceHeadquarters::getInstance()
{
	if(!instance)
	{
		instance = new PoliceHeadquarters;
	}

	return instance;
}

Factory * PoliceHeadquarters::establishRegularDepartments()
{
	return new SimplePoliceFactory;
}

Factory * PoliceHeadquarters::establishSpecialDepartments()
{
	return new SpecialPoliceFactory;
}