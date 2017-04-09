#ifndef _VERKETTUNG_H_
#define _VERKETTUNG_H_
#include <stdio.h>
#include <stdlib.h>

typedef struct pointeur_t {
	int value;
	struct pointeur_t next;
}pointeur;

typedef struct Liste_t
{
	struct pointeur_t head;
}List;

List INIT_LIST();
void ADD_VALUE(List liste, int a);
void REMOVE_VALUE(List liste);
void SHOW_ALL_VALUE(List liste);
#endif
