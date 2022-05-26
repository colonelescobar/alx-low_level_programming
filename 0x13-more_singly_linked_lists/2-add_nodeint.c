Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@colonelescobar 
debayyo
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
alx-low_level_programming/0x13-more_singly_linked_lists/2-add_nodeint.c
@debayyo
debayyo lists.h
Latest commit b132415 on Apr 26
 History
 1 contributor
24 lines (19 sloc)  431 Bytes
   
#include "lists.h"

/**
 * add_nodeint - add new node a beginning of a a list
 * @head: pointer
 *@n:number
 * Return:  number elements of linked list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	/*Using malloc*/
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /*Assing data*/
	new_node->next = *head;
	*head = new_node;

	return (*head);
}