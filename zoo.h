#pragma once
using namespace std;
#define _CRT_SECURE_NO_WARNINGS

#include"Lions.h"
//#include"Bafalo.h"
//#include"Corals.h"
//#include"Cow.h"
//#include"Horse.h"
//#include"Shark.h"
//#include"Sheep.h"
//#include"Sponges.h"
//#include"Wolf.h"
//#include"Zebra.h"

#ifndef ZOO_H
#define ZOO_H

class Zoo 
{
public:
	bool add_animal(Animal* animal);// add animal to the zoo
	void feed_animal();//feed the animal
	void show_animals();//sow the animals
	void ability_moving_animals();//abilities of animals
	void hunter_show();//lion hunter show
	int get_size_animals() const { return size_animals; }//know how many animals



private:
	Animal* animals[200];
	Moving* moving_animals[100];
	Lions* lions[100];
	int size_animals = 0;
	int size_moving = 0;
	int size_lions = 0;


};





#endif 
