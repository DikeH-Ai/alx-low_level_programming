#include <stdlib.h>
#include "dog.h"
int str_len(char *words);
void str_cpy(char *source, char *dest);
/**
 *new_dog - creates a new dog
 *@name: member1
 *@age: member2
 *@owner: member3
 *Return: returns dog-t struct pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len, len1;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	len = str_len(name);
	dog->name = malloc(sizeof(char) * (len + 1));

	if (dog->name == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	len1 = str_len(owner);
	dog->owner = malloc(sizeof(char) * (len1 + 1));

	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->owner);
		return (NULL);
	}

	str_cpy(name, dog->name);
	str_cpy(owner, dog->owner);
	dog->age = age;

	if (dog)
		return (dog);
	return (NULL);
}
/**
 *str_len - count the words
 *@words: word parameter
 *Return: returns int
 */
int str_len(char *words)
{
	int i = 0;

	while (words[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 *str_cpy - compy strings
 *@source: course
 *@dest: destinantion
 *Return: void
 */
void str_cpy(char *source, char *dest)
{
	int j;
	int i = str_len(source);

	for (j = 0; j < i; j++)
	{
		dest[j] = source[j];
	}
	dest[j] = '\0';
}
