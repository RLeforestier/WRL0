#include "../header/verkettung.h"

List INIT_LIST()						//the list must be initialized first before
{										//variable member have to be add
	pointeur einP = malloc(sizeof(einP));
	List liste = malloc(sizeof(liste));

	if(einP == NULL || liste == NULL)
	{
		exit(EXIT_FAILURE);
	}
	einP.value = 0;
	einP.next = NULL;
	liste.head = einP;

	return liste;
}
										//this method specify in which list the
										//the values have to be add
void ADD_VALUE(List liste, int a)
{
	pointeur p = malloc(sizeof(p));
	if(liste == NULL || p == NULL)
	{
		exit(0);
	}
	p.value = a;
	p.next = liste.head;
	liste.head = p;
}
										//to remove a member on the list we have
										//to create another pointer to save the
										//value that we want to remove and free it
										//first save the head of the list in this pointer
void REMOVE_VALUE(List liste)
{

	if(liste == NULL)
	{
		exit(EXIT_FAILURE);
	}
	pointeur va_to_rem = liste.head;
	liste.head = liste.head.next;
	free(va_to_rem);
}
										//to show all the members added in the list
										//we have to verify first if the it is not empty
										//then display them while the list is not null
void SHOW_ALL_VALUE(List liste)
{
	if(liste == NULL)
	{
		exit(EXIT_FAILURE);
	}
	pointeur current = liste.head;
	while(current != NULL)
	{
		printf("%d -> ",current.value);
		current = current.next;
	}
	printf("NULL\n");
}
