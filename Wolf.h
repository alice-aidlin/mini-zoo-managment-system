#pragma once
using namespace std;
#include"Predator.h"
#define _CRT_SECURE_NO_WARNINGS
#ifndef WOLF_H
#define WOLF_H

class Wolf : public Predator
{
public:
	
	virtual void type_animal() { cout << "Wolf" << endl; }//type
	virtual void food() { cout << " Rabbit "; }//food
	virtual void show() { cout << "Joyful Running and flapping their tail" << endl; }//wolf show

private:

};




#endif
