#include "great_hero.h"

int main()
{
	
	// Weapon * weapon = new ExtendedClipDecorator(new SuppressorDecorator(new LaserSightDecorator(new Firearm(100, 600, "AK-47"))));
	// Weapon * weapon2 = new ExtendedClipDecorator(new SuppressorDecorator(new Firearm(20, 300, "USAS 12")));

	// (*weapon).shoot();
	// weapon2->shoot();

	// WeaponBelt belt;

	// belt.push(weapon);
	// belt.push(weapon2);

	// Weapon * sameWeapon = belt.pop();

	// sameWeapon->shoot();

	// Weapon * sameWeapon2 = belt.pop();

	// sameWeapon2->shoot();

	GreatHeroFacade duke;
	duke.sayMyName();
	duke.giveWeapons();
	duke.shootThemWeapons();
}