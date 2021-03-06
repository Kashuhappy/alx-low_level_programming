#include "search_algos.h"
/**
* print_array which prints the array separated by commas
* @array: the array to be printed
* @size: the size of the array
*/
void print_array(int *array, size_t size)
{
size_t i = 0;
for ( ; i < size - 1; i++)
printf("%i, ", array[i]);
printf("%i\n", array[i]);
}
/**
* a function that searches for a value in a sorted array of integers
* using the Binary search algorithm
* @array: the array to be searched
* @size: the size of the array
* @value: the value being searched for
* Return: the first location of value inside array or -1 if
* it can't be found
*/
int binary_search(int *array, size_t size, int value)
{
size_t mid = size / 2;
int loc;
if (size == 0 || !array)
return (-1);
printf("Searching in array: ");
print_array(array, size);
/*Base case*/
if (size == 1 && array[0] != value)
return (-1);
if (size % 2  == 0)
mid -= 1;
/*main case*/
if (array[mid] > value)
return (binary_search(array, mid, value));
else if (array[mid] < value)
{
if (size % 2  == 0)
mid = mid + 1;
loc = binary_search(array + mid + ((size  % 2 == 0) ? 0 : 1), mid, value);
if (loc == -1)
return (-1);
return (loc + mid);
}
return (mid);
}
