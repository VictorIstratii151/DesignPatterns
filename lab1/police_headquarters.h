#pragma once

class PoliceHeadquarters 
{
private:
	static PoliceHeadquarters * instance;
	int personnel;
public:
	void setPersonnel(int p);
	int getPersonnel() const;
	static PoliceHeadquarters * instance();
};