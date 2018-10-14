#include "police_headquarters"

void PoliceHeadquarters::setPersonnel(int p)
{
	this->personnel = p;
}

int PoliceHeadquarters::getPersonnel() const
{
	return this->personnel;
}

static PoliceHeadquarters * PoliceHeadquarters::instance()
{
	if(!this->instance)
	{
		this->instance = new PoliceHeadquarters;
	}

	return this->instance;
}