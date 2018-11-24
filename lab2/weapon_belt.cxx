#include "weapon_belt.h"

BeltIter * WeaponBelt::createIterator() const
{
	return new BeltIter(this);
}

WeaponBelt::WeaponBelt()
{
	itemPointer = -1;
}

void WeaponBelt::push(Weapon * wpn)
{
	items[++itemPointer] = wpn;
}

Weapon * WeaponBelt::pop()
{
	return items[itemPointer--];
}

bool WeaponBelt::isEmpty()
{
	return (itemPointer == -1);
}



BeltIter::BeltIter(const WeaponBelt * blt)
{
	belt = blt;
}

void BeltIter::first()
{
	index = 0;
}

void BeltIter::next()
{
	index++;
}

bool BeltIter::isDone()
{
	return index == belt->itemPointer + 1;
}

Weapon * BeltIter::currentItem()
{
	return belt->items[index];
}