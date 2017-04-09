/*
 * Manager.cpp
 *
 *  Created on: 29.03.2017
 *      Author: rutch001
 */
#include "../header/Manager.h"

Manager::Manager(float f):Angestellter("Unbekannt", 500.0f)
{
	bonus = f;

}

Manager::Manager(char *n, float g, float b):Angestellter(n,g), bonus{b}
{

}

Manager::~Manager()
{

}

void Manager:: SET_BONUS(float b)
{
	bonus = b;
}

float Manager::GET_BONUS()
{
	return bonus;
}
