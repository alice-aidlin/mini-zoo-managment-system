#pragma once
using namespace std;
#include"Moving.h"
#define _CRT_SECURE_NO_WARNINGS
#ifndef VEGETARIAN_H
#define VEGETARIAN_H

class Vegetarian : public Moving
{
public:
	virtual void eat()
	{
		cout << "Eating grass" << endl;//vegi eat
	}
	virtual void show() { cout << "Bored staring at the guests" << endl; }//vegi show

private:

};




#endif
