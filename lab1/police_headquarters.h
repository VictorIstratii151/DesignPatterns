#pragma once

class PoliceHeadquarters 
{
private:
	static PoliceHeadquarters * instance;
	int personnel;
public:
	int getPersonnel() const;
	void setPersonnel(int p);
	static PoliceHeadquarters * instance();

}