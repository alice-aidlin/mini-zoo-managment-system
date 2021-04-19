#pragma once
using namespace std;
#include"Predator.h"
#define _CRT_SECURE_NO_WARNINGS
#ifndef LIONS_H
#define LIONS_H

class Lions : public Predator
{
public:
	
	virtual void type_animal() { cout << "Lion" << endl; }//type
	void hunter(){ cout << "HUNTING!" << endl; }//hunter show
	virtual void food(){ cout<<" Gnu "; }//the food of lion
	virtual void show(){cout<<"Royal walking in the garden"<<endl; }//lion show


private:
	
	

};




#endif
