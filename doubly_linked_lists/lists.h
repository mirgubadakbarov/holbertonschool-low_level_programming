#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/* Definition of the doubly linked list structure */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/* Function prototype */
size_t dlistint_len(const dlistint_t *h);

#endif /* LISTS_H */
