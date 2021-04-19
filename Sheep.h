#pragma once
using namespace std;
#include"Farm_family.h"
#define _CRT_SECURE_NO_WARNINGS
#ifndef SHEEP_H
#define SHEEP_H

class Sheep : public Farm_family
{
public:

	
	virtual void type_animal() { cout << "Sheep" << endl; }//type
	
private:

};




#endif
