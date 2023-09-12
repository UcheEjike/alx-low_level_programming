#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * If fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *p_dog;
    int lname, lowner;

    // Check for NULL pointers
    if (!name || !owner)
        return (NULL);

    // Allocate memory for the dog structure
    p_dog = malloc(sizeof(dog_t));
    if (!p_dog)
        return (NULL);

    // Calculate string lengths
    lname = strlen(name);
    lowner = strlen(owner);

    // Allocate memory for name and owner strings
    p_dog->name = malloc(lname + 1);
    p_dog->owner = malloc(lowner + 1);

    if (!p_dog->name || !p_dog->owner)
    {
        // Free allocated memory in case of an error
        free(p_dog->owner);
        free(p_dog->name);
        free(p_dog);
        return (NULL);
    }

    // Copy name and owner strings
    strcpy(p_dog->name, name);
    strcpy(p_dog->owner, owner);

    p_dog->age = age;

    return (p_dog);
}
