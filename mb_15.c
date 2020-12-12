#include <stdio.h>
#include <stdint.h>

int search(int *arrayToSearch, int sizeOfArray, int valueToFind);


int main(void)
{
	int tablicaTemp[] = {1, 45, 33, 235, 122, 54, 23, 56, 43};
	int valueToFind = 33;
	int sizeOfArray = sizeof(tablicaTemp)/sizeof(tablicaTemp[0]);
	int result = search(tablicaTemp, sizeOfArray, valueToFind);
	printf("Wartosc pod result jest rowna %i.\n", result);	

	(result == -1) ? printf("Element is not present in array.\n") : printf("Element is present at index %d", result);


	return 0;
}

int search(int *arrayToSearch, int sizeOfArray, int valueToFind)
{
	for (int i = 0; i < sizeOfArray; i++)
	{
		if ((*(arrayToSearch + i)) == valueToFind)
		{
			return i;
		}
	}
	return -1;
}

