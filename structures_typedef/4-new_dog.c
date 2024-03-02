#include <stdlib.h>
#include <string.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
    size_t name_len, owner_len;
    dog_t *new_dog;

    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return NULL;

    name_len = strlen(name) + 1;
    owner_len = strlen(owner) + 1;

    new_dog->name = malloc(name_len);
    new_dog->owner = malloc(owner_len);
    if (new_dog->name == NULL || new_dog->owner == NULL) {
        free(new_dog->name);
        free(new_dog->owner);
        free(new_dog);
        return NULL;
    }

    memcpy(new_dog->name, name, name_len);
    memcpy(new_dog->owner, owner, owner_len);

    new_dog->age = age;

    return new_dog;
}
