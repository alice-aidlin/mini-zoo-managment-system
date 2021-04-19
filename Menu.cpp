#include"Menu.h"

using namespace std;
#include<iostream>
#define CRT_SECURE_NO_WARNINGS

void Menu::animal_menu(int counter)
{
	Animal* new_animal;
	int choose;
	do
	{
		cout << "choose the animal you wont to add to the Zoo\n";
		cout << "1.Buffalo\n2.Coral\n3.Cow\n4.Horse\n5.Lion\n6.Shark\n7.Sheep\n8.Sponges\n9.Wolf\n10.Zebra\n" << endl;
		cin >> choose;
		switch (choose)
		{
		case 1:
			new_animal = new Bafalo;
			my_zoo.add_animal(new_animal);
			++counter;//know how many animals we add
			break;
		case 2:
			new_animal = new Corals;
			my_zoo.add_animal(new_animal);
			++counter;
			break;
		case 3:
			new_animal = new Cow;
			my_zoo.add_animal(new_animal);
			++counter;
			break;
		case 4:
			new_animal = new Horse;
			my_zoo.add_animal(new_animal);
			++counter;
			break;
		case 5:
			new_animal = new Lions;
			my_zoo.add_animal(new_animal);
			++counter;
			break;
		case 6:
			new_animal = new Shark;
			my_zoo.add_animal(new_animal);
			++counter;
			break;
		case 7:
			new_animal = new Sheep;
			my_zoo.add_animal(new_animal);
			++counter;
			break;
		case 8:
			new_animal = new Sponges;
			my_zoo.add_animal(new_animal);
			++counter;
			break;
		case 9:
			new_animal = new Wolf;
			my_zoo.add_animal(new_animal);
			++counter;
			break;
		case 10:
			new_animal = new Zebra;
			my_zoo.add_animal(new_animal);
			++counter;
			break;
		default:
			cout << "bad choice, try again" << endl;
			
			break;
		}
	} while (counter != 5);//at first we need to choose 5 animals so we send to func with counter 0, then when we already have this 5 evry time we want to add only one animal we send counter 4 
	
}

Menu::Menu()
{

	cout << "welcome to the zoo, at first choose 5 animals to the zoo" << endl;
	animal_menu(0);//send counter 0 to add 5 animals
	int choice;
	do {
		cout << "1.add animal to the zoo\n2.feed the zoo\n3.show the zoo\n4.abilities of the zoo\n5.lions hunter show\n6.exit\n" << endl;
		cin >> choice;
		switch (choice)

		{
		case 1:
			animal_menu(4);//send with counter 4 for adding only 1 animal
			cout << "\n";
			break;
		case 2:
			my_zoo.feed_animal();//feeding the zoo
			cout << "\n";
			break;
		case 3:
			my_zoo.show_animals();//show the zoo
			cout << "\n";
			break;
		case 4:
			my_zoo.ability_moving_animals();//abilities of animals
			cout << "\n";
			break;
		case 5:
			my_zoo.hunter_show();//lions hunter show
			cout << "\n";
			break;
		case 6:
			cout << "good bye";//exit
			cout << "\n";
			break;

		default:cout << "bad input try again\n";
			cout << "\n";
			break;
		}
	} while (choice != 6);
}


