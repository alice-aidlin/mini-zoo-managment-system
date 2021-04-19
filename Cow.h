#pragma once
using namespace std;
#include"Farm_family.h"
#define _CRT_SECURE_NO_WARNINGS
#ifndef COW_H
#define COW_H

class Cow : public Farm_family
{
public:

	virtual void type_animal() { cout << "Cow" << endl; }//type
private:

};




#endif
