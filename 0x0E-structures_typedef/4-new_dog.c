#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
int i = 0, j = 0, k;
dog_t *dogey;
while (name[i] != '\0')
	i++;
while (owner[j] != '\0')
	j++;
dogey = malloc(sizeof(dog_t));
if (dogey == NULL)
{
free(dogey);
return (NULL);
}
dogey->name = malloc(i * sizeof(dogey->name));
if (dogey->name == NULL)
{
free(dogey->name);
free(dogey);
return (NULL);
}
for (k = 0; k <= i; k++)
dogey->name[k] = name[k];
dogey->age = age;
dogey->owner = malloc(j * sizeof(dogey->owner));
if (dogey->owner == NULL)
{
free(dogey->owner);
free(dogey->name);
free(dogey);
return (NULL);
}
for (k = 0; k <= j; k++)
dogey->owner[k] = owner[k];
return (dogey);
}
