#include "lists.h"
/**
 * free_listint2 -  free a list
 * @head: pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp; /*Declaring list*/

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL) /*Run through the list to the end*/
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(*head);
	*head = NULL;
}
<<<<<<< HEAD

=======
 
>>>>>>> 54696bdcff06b09f8cdcfcb552ced99e108cf7ee
