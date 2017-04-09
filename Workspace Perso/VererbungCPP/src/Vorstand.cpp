/*
 * Vorstand.cpp
 *
 *  Created on: 29.03.2017
 *      Author: rutch001
 */
#include "../header/Vorstand.h"

Vorstand::Vorstand(float a):Manager("None", 1000.0f, 200.0f),abfindung{a}{}
Vorstand::Vorstand(char *n, float g, float a):Manager(n,g, a),abfindung{a}{}

void Vorstand::SET_ABFINDUNG(float a)
{
	abfindung = a;
}

float Vorstand::GET_ABFINDUNG()
{
	return abfindung;
}
