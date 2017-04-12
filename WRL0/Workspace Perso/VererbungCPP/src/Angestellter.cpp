/*
 * Angestellter.cpp
 *
 *  Created on: 29.03.2017
 *      Author: rutch001
 */
#include "../header/Angestellter.h"

Angestellter::Angestellter(char *c, float g) : name{c}, gehalt{g}
{

}

Angestellter::~Angestellter()
{

}

void Angestellter::SET_NAME(char *n)
{
	name = n;
}

void Angestellter::SET_GEHALT(float g)
{
	gehalt = g;
}

char* Angestellter::GETNAME()
{
	return name;
}

float Angestellter::GET_GEHALT()
{
	//std::cout<<name;
	return gehalt;
}
