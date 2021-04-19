#pragma once
using namespace std;
#include"Vegetarian.h"
#define _CRT_SECURE_NO_WARNINGS
#ifndef HORSE_FAMILY_H
#define HORSE_FAMILY_H

class Horse_family : public Vegetarian
{
public:
	virtual void ability() { cout << "Running fast in circles" << endl; }

private:

};




#endif
