#include "police_headquarters.h"

#define SPECIAL


int ForceStructure::total = 0;
PoliceHeadquarters * PoliceHeadquarters::instance = 0;

void foo()
{
	PoliceHeadquarters::getInstance()->setPersonnel(1000);
	cout << PoliceHeadquarters::getInstance()->getPersonnel() << endl;
}

int main() 
{
	foo();

	#ifdef SIMPLE
		Factory * factory = PoliceHeadquarters::getInstance()->establishRegularDepartments();
	#endif
	#ifdef SPECIAL
		Factory * factory = PoliceHeadquarters::getInstance()->establishSpecialDepartments();
	#endif

	ForceStructure * fs = factory->createRegionalStructure();
	fs->report();
	ForceStructure * fs2 = factory->createMunicipalStructure();
	fs2->report();

	ForceStructure * fs3 = fs->clone();
	fs3->report();

	ForceStructure * fs4 = fs2->clone();
	fs4->report();
}