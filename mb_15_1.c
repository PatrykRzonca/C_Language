#include <stdio.h>
#include <stdint.h>

int search(int *arrayToSearch, int sizeOfArray, int valueToFind);

int binarySearch(int *arrayToSearch, int leftSide, int rightSide, int valueToFind);



int main(void)
{
	int tablicaTemp[] = {1, 11, 22, 33, 44, 55, 66, 77, 88};
	int valueToFind = 33;
	int sizeOfArray = sizeof(tablicaTemp)/sizeof(tablicaTemp[0]);
	
	int result = search(tablicaTemp, sizeOfArray, valueToFind);
	(result == -1) ? printf("Element is not present in array.\n") : printf("Element is present at index %d\n", result);

	int result_1 = binarySearch(tablicaTemp, 0, sizeOfArray - 1, 66);	
	(result_1 == -1) ? printf("Element is not present in array.\n") : printf("Element is present at index %d\n", result_1);




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

int binarySearch(int *arrayToSearch, int leftSide, int rightSide, int valueToFind)
{
	if (rightSide >= leftSide)
	{
		int mid = leftSide + (rightSide	- leftSide) / 2;

		if (arrayToSearch[mid] == valueToFind)
		{
			return mid;
		}

		if (arrayToSearch[mid] > valueToFind)
		{
			return binarySearch(arrayToSearch, leftSide, mid - 1, valueToFind);
		}

		return binarySearch(arrayToSearch, mid + 1, rightSide, valueToFind);
	}
	return -1;
}


