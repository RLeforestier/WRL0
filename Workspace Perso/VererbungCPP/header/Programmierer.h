/*
 * Programmierer.h
 *
 *  Created on: 29.03.2017
 *      Author: rutch001
 */

#ifndef HEADER_PROGRAMMIERER_H_
#define HEADER_PROGRAMMIERER_H_
#include "../header/Angestellter.h"

class Programmierer : protected Angestellter
{
private:
	float bonus;
public:
	Programmierer(float b);
	Programmierer(char *n, float g, float b);
	~Programmierer();
	void SET_BONUS(float b);
	float GET_BONUS();
};

#endif /* HEADER_PROGRAMMIERER_H_ */
