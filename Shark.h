#pragma once
using namespace std;
#include"Predator.h"
#define _CRT_SECURE_NO_WARNINGS
#ifndef SHARK_H
#define SHARK_H

class Shark : public Predator
{
public:
	
	virtual void type_animal() { cout << "White starch shark" << endl; }//type
	virtual void food() { cout << " Fish "; }//food
	virtual void show() { cout << "Water diving" << endl; }//shark show

private:

};




#endif
