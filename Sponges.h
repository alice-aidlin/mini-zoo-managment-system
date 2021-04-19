#pragma once
using namespace std;
#include"Static.h"
#define _CRT_SECURE_NO_WARNINGS
#ifndef SPONGES_H
#define SPONGES_H

class Sponges : public Static
{
public:
	Sponges() {}
	virtual void type_animal() { cout << "Sponges" << endl; }//type
	virtual void eat() { cout << "Filtering water flow to obtain food" << endl; }//eat

private:

};




#endif
