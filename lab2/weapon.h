#pragma once

#include <string>
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
	string name;
public:
	Firearm(int c, int f, string n);
	void shoot();
};

class Decorator : public Weapon
{
private:
	Weapon * weapon;

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
public:
	SuppressorDecorator(Weapon * wpn);
	void shoot();
};

class LaserSightDecorator : public Decorator
{
public:
	LaserSightDecorator(Weapon * wpn);
	void shoot();
};