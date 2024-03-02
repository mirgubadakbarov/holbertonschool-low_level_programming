#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This function creates a new dog with the given name, age, and owner.
 *              It allocates memory for the dog and copies the name and owner strings.
 *              Returns a pointer to the new dog on success, or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return NULL;

    new_dog->name = strdup(name);
    if (new_dog->name == NULL) {
        free(new_dog);
        return NULL;
    }

    new_dog->owner = strdup(owner);
    if (new_dog->owner == NULL) {
        free(new_dog->name);
        free(new_dog);
        return NULL;
    }

    new_dog->age = age;

    return new_dog;
}
