#pragma once
#include "weapon.h"

class BeltIter;

class WeaponBelt
{
private:
	int itemPointer;
	Weapon * items[3];

public:
	friend class BeltIter;
	BeltIter * createIterator() const;
	WeaponBelt();
	void push(Weapon * wpn);
	Weapon * pop();
	bool isEmpty();
};

class BeltIter
{
private:
	const WeaponBelt * belt;
	int index;

public:
	BeltIter(const WeaponBelt * blt);
	void first();
	void next();
	bool isDone();
	Weapon * currentItem();
};