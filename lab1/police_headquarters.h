#pragma once
#include "factory.h"

class PoliceHeadquarters 
{
private:
	static PoliceHeadquarters * instance;
	int personnel;
public:
	void setPersonnel(int p);
	int getPersonnel() const;
	static PoliceHeadquarters * getInstance();
	Factory * establishRegularDepartments();
	Factory * establishSpecialDepartments();
};