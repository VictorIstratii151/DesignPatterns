#include "weapon_belt.h"

class GreatHeroFacade
{
private:
	static const string name;
	WeaponBelt belt;

public:
	GreatHeroFacade();
	void sayMyName();
	void giveWeapons();
	void shootThemWeapons();
};