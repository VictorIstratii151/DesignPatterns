## Lab 1

In order to compile the code write the following in bash:
```bash
g++ weapon.cxx weapon_belt.cxx great_hero.cxx main.cxx -o test
```

## About the lab
This lab is going to show you some worthless yet extremely bad-ass implementation of several Design Patterns.

## Used Design Patterns

### Decorator
A so-called "lowest common denominator" for this implementation is represented by the abstract class ```Weapon``` which has a pure virtual function of shooting. The core class is represented by the class ```Firearm```, which can have different modules attached to it. Here is where comes handy the Decorator pattern, as I made it possible instantiate objects of the same ```Weapon``` class with different characteristics, due to the presence of a ```Decorator```. The children classes which represent firearm modules inherit from this class and allow different configurations of instantiation.

### Iterator
I thought that it'd be great to carry more than only on weapon, so I decided to implement a ```WeaponBelt``` that represents a collection of weapons. The belt itself follows the implementation of a generic stack, but specialized for weapons. Because in theory we could have different types of collections and traversing techniques, it was necessary for a ```BeltIter``` class, which would implement a specific protocol for traversing. Thus it were obtained functions like ```first()```, ```next()```, ```isDone()``` and ```currentItem()```.

### Facade
A Facade somehow ressembles a Singleton, because we usually have the necessity for only one facade. Well, I thought that it would be nice to hide all the complex processing of Weapon Belts and Weapons behind a simpler interface. It is pretty logical that cool weapons must be carried by cool guys, so here is where came the idea to define a hero facade, which will somehow utilize his weapons and carry them on a belt. That's the story behind the apparition of Duke Nukem ftw. So, ```GreatHeroFacade``` class just has under the hood some simple functions which don't bother the mind of a client and give him some wrapped functionality.