#include "weapon.h"

Firearm::Firearm(int c, int f, string n) : clipSize(c), fireRate(f), name(n) {}

void Firearm::shoot() 
{
	cout << "The gun " << name << " With a magazine " << clipSize << " shoots " << fireRate << " rounds per minute." << endl;
}

Decorator::Decorator(Weapon * wpn)
{
	weapon = wpn;
}

void Decorator::shoot()
{
	weapon->shoot();
}

ExtendedClipDecorator::ExtendedClipDecorator(Weapon * wpn) : Decorator(wpn) {}

void ExtendedClipDecorator::shoot()
{
	Decorator::shoot();
	cout << "This weapon also comes with an extended clip!" << endl;
}

SuppressorDecorator::SuppressorDecorator(Weapon * wpn) : Decorator(wpn) {}

void SuppressorDecorator::shoot()
{
	Decorator::shoot();
	cout << "This weapon kills people silently with a suppressor." << endl;
}

LaserSightDecorator::LaserSightDecorator(Weapon * wpn) : Decorator(wpn) {}

void LaserSightDecorator::shoot()
{
	Decorator::shoot();
	cout << "This weapon is more accurate with a laser sight." << endl;
}