#pragma once
#include <iostream>

using namespace std;

class Weapon
{
public:
	virtual void shoot() = 0;
};

class Firearm : public Weapon
{
private:
	int clipSize;
	int fireRate;
	int name;
public:
	Firearm(int c, int f, int n);
	void shoot();
};

class Decorator : public Weapon
{
private:
	Weapon * wpn;

public:
	Decorator(Weapon * wpn);
	void shoot();
};

class ExtendedClipDecorator : public Decorator
{
public:
	ExtendedClipDecorator(Weapon * wpn);
	void shoot();
};

class SuppressorDecorator : public Decorator
{
	SuppressorDecorator(Weapon * wpn);
	void shoot();
};

class LaserSightDecorator : public Decorator
{
	LaserSightDecorator(Weapon * wpn);
	void shoot();
};