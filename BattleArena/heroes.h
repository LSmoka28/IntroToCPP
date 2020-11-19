#pragma once

#include <string>
#include <string>

using std::string;

struct superhero
{

	string name = "";
	string nameOfAttack = "";
	int minDmg = 0;
	int maxDmg = 0;
	int health = 0;

};

// attack another hero
void attack();

// sort heroes
void sort();




