#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog, or NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog_ptr;
    char *name_copy, *owner_copy;
    int name_len = 0, owner_len = 0;

    while (name[name_len] != '\0')
        name_len++;
    while (owner[owner_len] != '\0')
        owner_len++;

    new_dog_ptr = malloc(sizeof(dog_t));
    if (new_dog_ptr == NULL) {
        return NULL;
    }

    name_copy = malloc(name_len + 1);
    if (name_copy == NULL) {
        free(new_dog_ptr);
        return NULL;
    }
    owner_copy = malloc(owner_len + 1);
    if (owner_copy == NULL) {
        free(name_copy);
        free(new_dog_ptr);
        return NULL;
    }

    for (int i = 0; i <= name_len; i++)
        name_copy[i] = name[i];
    for (int i = 0; i <= owner_len; i++)
        owner_copy[i] = owner[i];

    new_dog_ptr->name = name_copy;
    new_dog_ptr->age = age;
    new_dog_ptr->owner = owner_copy;

    return new_dog_ptr;
}
