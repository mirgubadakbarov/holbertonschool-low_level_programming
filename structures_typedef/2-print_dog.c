#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints information about a dog
 * @d: Pointer to the struct dog variable to print
 *
 * Description: This function prints information about a dog,
 *              including its name, age, and owner.
 *              If any element of the struct dog is NULL,
 *              "(nil)" is printed instead.
 */
void print_dog(struct dog *d)
{
    if (d == NULL)
        return;
    
    printf("Name: %s\n", d->name ? d->name : "(nil)");
    printf("Age: %.6f\n", d->age);
    printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
