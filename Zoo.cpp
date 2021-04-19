#include"zoo.h"

using namespace std;
#include<iostream>
#define CRT_SECURE_NO_WARNINGS


bool Zoo::add_animal(Animal* a)
{
	if (size_animals >= MAX_SIZE)//if more than 200 animals
		return false;

	Moving* if_moving = dynamic_cast<Moving*>(a);// check if moving or static and casting
	if (if_moving != NULL)//yes moving animal
	{
		if (size_moving >= MAX_SIZE / 2)//if more than 100 moving animals
			return false;
		moving_animals[size_moving] = if_moving;//add to moving animals arryarray in the last place
		++size_moving;// increase the index in array
		animals[size_animals] = if_moving;//add to animal arry
		++size_animals;//increase the index in array
		if (typeid(*a) == typeid(Lions))//if it is a lion
			if (size_lions < (MAX_SIZE / 2))//if less than 100 lion (moving animals) then do
			{
				lions[size_lions] = (Lions*)if_moving;//casting and add to lions array
				++size_lions;//increase the index in array
			}
		return true;
	}
	else //if static animal
	{
		animals[size_animals] = a;//add to animals array in the last place
		++size_animals;//increase the index in array
		return true;
	}
}

void Zoo::feed_animal()
{
	int i = 0;
	while (i<size_animals)//while we have array
	{
		animals[i]->type_animal();//print the type befor
		animals[i]->eat();//print what they eat
		++i;//increase the index
	}
}

void Zoo::show_animals()
{
	int i = 0;
	while (i < size_animals)//while we have array
	{
		animals[i]->type_animal();//print the type befor
		animals[i]->show();//print what they show
		++i;//increase the index
	}
}
void Zoo::ability_moving_animals()
{
	{
		int i = 0;
		while (i < size_moving)//while we have array
		{
			moving_animals[i]->type_animal();//print the type befor
			moving_animals[i]->ability();//print what moving animals abilities
			++i;//increase the index
		}
	}
}
void Zoo::hunter_show()
{
	{
		int i = 0;
		while (i < size_lions)//while we have array
		{
			lions[i]->type_animal();//print the type befor
			lions[i]->hunter();//print the lion hunter show
			++i;//increase the index
		}
	}
}

