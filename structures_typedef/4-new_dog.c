#include <stdlib.h>
#include <string.h>
#include "dog.h"

size_t custom_strlen(const char *str) {
    const char *p = str;
    while (*p)
        p++;
    return p - str;
}

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return NULL;

    size_t name_len = custom_strlen(name);
    size_t owner_len = custom_strlen(owner);

    new_dog->name = malloc(name_len + 1);
    if (new_dog->name == NULL) {
        free(new_dog);
        return NULL;
    }

    strcpy(new_dog->name, name);

    new_dog->owner = malloc(owner_len + 1);
    if (new_dog->owner == NULL) {
        free(new_dog->name);
        free(new_dog);
        return NULL;
    }

    strcpy(new_dog->owner, owner);

    new_dog->age = age;

    return new_dog;
}
