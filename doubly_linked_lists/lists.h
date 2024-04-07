#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h)
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_nodeint(dlistint_t **head, const int n);
dlistint_t *add_nodeint_end(dlistint_t **head, const int n);
void free_listint(dlistint_t *head);
void free_listint2(dlistint_t **head);
int pop_listint(dlistint_t **head);
dlistint_t *get_nodeint_at_index(dlistint_t *head, unsigned int index);
int sum_listint(dlistint_t *head);
dlistint_t *insert_nodeint_at_index(dlistint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(dlistint_t **head, unsigned int index);
dlistint_t *reverse_listint(dlistint_t **head);
size_t print_listint_safe(const dlistint_t *head);
size_t free_listint_safe(dlistint_t **h);
dlistint_t *find_listint_loop(dlistint_t *head);

#endif /* LISTS_H */
