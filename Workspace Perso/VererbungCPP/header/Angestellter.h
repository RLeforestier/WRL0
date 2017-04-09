/*
 * Angestellter.h
 *
 *  Created on: 29.03.2017
 *      Author: rutch001
 */

#ifndef HEADER_ANGESTELLTER_H_
#define HEADER_ANGESTELLTER_H_

class Angestellter
{
private:
	char *name;
	float gehalt;

public:
	Angestellter(char *c, float f);
	~Angestellter();
	void SET_NAME(char *n);
	void SET_GEHALT(float g);

	float GET_GEHALT();
	char* GETNAME();
};


#endif /* HEADER_ANGESTELLTER_H_ */
