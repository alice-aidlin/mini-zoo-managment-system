using namespace std;
#pragma once
#include"Animal.h"
#define _CRT_SECURE_NO_WARNINGS
#ifndef STATIC_H
#define STATIC_H

class Static : public Animal
{
public:
	virtual void show()
	{
		cout << "Beautiful & colorful views!" << endl;//static animals show
	}
private:

};




#endif
