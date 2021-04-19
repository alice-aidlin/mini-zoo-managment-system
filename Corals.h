#pragma once
using namespace std;
#include"Static.h"
#define _CRT_SECURE_NO_WARNINGS
#ifndef CORALS_H
#define CORALS_H

class Corals : public Static
{
public:
	virtual void type_animal(){ cout << "Corals" << endl; }//type
	virtual void eat() { cout << "Feeding on a variety of small sea-organisms" << endl; }//eat

private:

};




#endif
