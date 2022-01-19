#include "search_algos.h"
/**
* a function that searches for a value in an array of intergers
* using Linear search algorithm
* @array: a pointer to the first element of the array to be searched
* @size: the number of elements in the array
* @value: the value to be searched
* Return: the first location of value inside array or -1 if
* it can't be found
*/
int linear_search(int *array, size_t size, int value)
{
size_t i;
if (!array)
return (-1);
for (i = 0; i < size; i++)
{
printf("Value checked array[%i] = [%i]\n", (int)i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
