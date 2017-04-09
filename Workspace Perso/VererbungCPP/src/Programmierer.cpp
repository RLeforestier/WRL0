/*
 * Programmierer.cpp
 *
 *  Created on: 29.03.2017
 *      Author: rutch001
 */
#include "../header/Programmierer.h"

Programmierer::Programmierer(float b):Angestellter("No Name", 500.0f),bonus{b}{}
Programmierer::Programmierer(char *n, float g, float b):Angestellter(n, g),bonus{b}{}

Programmierer::~Programmierer(){}
void Programmierer::SET_BONUS(float b)
{
	bonus = b;
}

float Programmierer::GET_BONUS()
{
	return bonus;
}
