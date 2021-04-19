#pragma once
using namespace std;
#include"Horse_family.h"
#define _CRT_SECURE_NO_WARNINGS
#ifndef HORSE_H
#define HORSE_H

class Horse : public Horse_family
{
public:

	virtual void type_animal() {cout << "Horse" << endl; }//type
	
private:

};




#endif
