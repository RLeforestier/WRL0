/*
 * Vorstand.h
 *
 *  Created on: 29.03.2017
 *      Author: rutch001
 */

#ifndef HEADER_VORSTAND_H_
#define HEADER_VORSTAND_H_
#include "../header/Manager.h"

class Vorstand : protected Manager
{
private:
		float abfindung;
	public:
		Vorstand(float a);
		Vorstand(char *n, float g, float a);
		~Vorstand();
		void SET_ABFINDUNG(float a);
		float GET_ABFINDUNG();
};

#endif /* HEADER_VORSTAND_H_ */
