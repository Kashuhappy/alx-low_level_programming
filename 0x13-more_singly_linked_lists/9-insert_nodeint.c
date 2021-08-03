#include "lists.h"
/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: double pointer to head of list
* @idx: index to add new node
* @n: value at new node
* Return: address of new node, or NULL if failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_code, *temp;
unsigned int count;
temp = *head;
count = 0;
while (temp && count < idx - 1)
{
temp = temp->next;
count++;
}
new_node = malloc(sizeof(listint_t));
if (new_node != NULL)
{
new_node->n = n;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
if (count + 1 == idx)
{
new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}
}
free(newNode);
return (NULL);
}
