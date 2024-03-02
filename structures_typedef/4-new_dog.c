#include <stdlib.h>
#include <string.h>
#include "dog.h"

char *custom_strcpy(char *dest, const char *src)
{
	char *p = dest;

	while ((*p++ = *src++) != '\0')
		return (dest);
	
}

size_t custom_strlen(const char *str)
{
	size_t len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	return len;
}

dog_t *new_dog(char *name, float age, char *owner)
{
	size_t name_len, owner_len;

	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	name_len = custom_strlen(name);
	owner_len = custom_strlen(owner);

	new_dog->name = malloc(name_len + 1);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	custom_strcpy(new_dog->name, name);

	new_dog->owner = malloc(owner_len + 1);

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	custom_strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return new_dog;
}
