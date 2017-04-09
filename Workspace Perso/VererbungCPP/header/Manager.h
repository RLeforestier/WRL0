/*
 * Manager.h
 *
 *  Created on: 29.03.2017
 *      Author: rutch001
 */

#ifndef HEADER_MANAGER_H_
#define HEADER_MANAGER_H_
#include "../header/Angestellter.h"

class Manager : protected Angestellter
{
private:
	float bonus;
public:
	Manager(float b);
	Manager(char *n, float g, float b);
	~Manager();
	void SET_BONUS(float b);
	float GET_BONUS();
};

#endif /* HEADER_MANAGER_H_ */
