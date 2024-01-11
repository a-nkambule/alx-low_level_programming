#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 * @head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
