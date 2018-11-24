#include "great_hero.h"

const string GreatHeroFacade::name = "Duke Nukem";

GreatHeroFacade::GreatHeroFacade()
{

}

void GreatHeroFacade::sayMyName()
{
	cout << "AND HIS NAME IS " << GreatHeroFacade::name << endl;
}

void GreatHeroFacade::giveWeapons()
{
	Weapon * handgun = new LaserSightDecorator(new Firearm(9, 125, "m1911 Tactical"));
	Weapon * shotgun = new ExtendedClipDecorator(new SuppressorDecorator(new Firearm(20, 300, "USAS 12")));
	Weapon * assaultRifle = new ExtendedClipDecorator(new SuppressorDecorator(new LaserSightDecorator(new Firearm(50, 850, "M16A2"))));

	belt.push(handgun);
	belt.push(shotgun);
	belt.push(assaultRifle);
}

void GreatHeroFacade::shootThemWeapons()
{
	BeltIter * itr = belt.createIterator();

	for(itr->first(); !itr->isDone(); itr->next())
	{
		Weapon * wpn = itr->currentItem();
		wpn->shoot();
	}
}