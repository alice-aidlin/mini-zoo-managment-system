#pragma once
using namespace std;
#include"Moving.h"
#define _CRT_SECURE_NO_WARNINGS
#ifndef PREDATOR_H
#define PREDATOR_H

class Predator : public Moving
{
public:
	
	virtual void eat(){cout << "Preying! Eating"; food();cout << "! Yummy! " << endl;}//predtor eat
	virtual void food() = 0;//predator food
	virtual void ability() { cout << "Running after potential food" << endl; }//pradator abilities/sport

private:

};




#endif
