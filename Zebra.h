#pragma once
using namespace std;
#include"Horse_family.h"
#define _CRT_SECURE_NO_WARNINGS
#ifndef ZEBRA_H
#define ZEBRA_H

class Zebra : public Horse_family
{
public:

	virtual void type_animal() { cout << "Zebra" << endl; }//show
private:

};




#endif
