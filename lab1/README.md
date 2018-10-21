## Lab 1

In order to compile the code write the following in bash:
```bash
g++ police_headquarters.cpp main.cpp -o test
```
## About the lab
My laboratory work does not have a real world usage, however I think that it still seems pretty logical and adequate. The application represents the structure and organization of Police in a supposed country. It is assumed that the Police can be ruled from only one place, has regular and special departments.

## Used Design Patterns

### Singleton
As it was stated before, the Police headquarters represent the singleton class, being the entry point into the application and executing the establishment of Police departments. The class is declared in ```police_headquarters.h``` and features the ```getInstance();``` method which returns the class instance.

### Abstract Factory
The abstract factory is both declared and defined in the ```factory.h``` header file, and contains three classes. Both ```SimplePoliceFactory``` and ```SpecialPoliceFactory``` factories inherit from the ```Factory``` abstract. The difference of factories is then defined in ```main.cpp``` file, where the macro ```#define SPECIAL``` lets the program know whether it is a necessity to create a regular or special police departments.

### Prototype
The base class for the Prototype design pattern is defined in ```force_structure.h```. It the ```clone()``` pure virtual function, which has to be implemented by child classes. The child classes are representing different police departments and are defined in the ```police.h``` header file. Each one of these classes implement the ```clone()``` function, thus making it possible to demonstrate the prototyping in the main function.
