#pragma once
using namespace std;
#include"Vegetarian.h"
#define _CRT_SECURE_NO_WARNINGS
#ifndef FARM_FAMILY_H
#define FARM_FAMILY_H

class Farm_family : public Vegetarian
{
public:
	virtual void ability() { cout << "Walking slowly in the garden" << endl; }//abilities/sport of the farm famiy

private:

};




#endif
