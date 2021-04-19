#pragma once
using namespace std;
#include <typeinfo>
#include <cassert>
#include <iostream>
#include"zoo.h"
#include"Lions.h"
#include"Bafalo.h"
#include"Corals.h"
#include"Cow.h"
#include"Horse.h"
#include"Shark.h"
#include"Sheep.h"
#include"Sponges.h"
#include"Wolf.h"
#include"Zebra.h"
#define _CRT_SECURE_NO_WARNINGS
#ifndef MENU_H
#define MENU_H

class Menu
{
public:
	Menu();//ctor

private:
	void animal_menu(int counter);//for choosing animal
	Zoo my_zoo;

};




#endif
