#pragma once
using namespace std;
#include <typeinfo>
#include <assert.h>
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
#ifndef ANIMAL_H
#define ANIMAL_H
#define MAX_SIZE 200

class Animal
{
public:
	virtual void type_animal() = 0;//type of animal
	virtual void show() = 0;//what aimal show
	virtual void eat() = 0;//what animal eat


private:

};




#endif
