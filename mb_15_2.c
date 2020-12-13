#include <stdio.h>
#include <stdint.h>



int main(void)
{
	// zmienna testowa


	uint8_t zmienna_1 = 1;
	int8_t zmienna_2 = 1;

	for (int i = 0; i < 30; i++)
	{
		printf("Przesuniecie o %d miejsc i mamy %d.\n", i, zmienna_1 << i);
	}
	
	float zmienna_3 = 0.1;
	printf("Wartosc w zmiennej wynosi %f.\n", zmienna_3);
	
	zmienna_3 += 0.1;
	printf("Wartosc w zmiennej wynosi %f.\n", zmienna_3);
	zmienna_3 += 0.1;
	printf("Wartosc w zmiennej wynosi %f.\n", zmienna_3);
	zmienna_3 += 0.1;
	printf("Wartosc w zmiennej wynosi %f.\n", zmienna_3);
	zmienna_3 += 0.1;
	printf("Wartosc w zmiennej wynosi %f.\n", zmienna_3);
	zmienna_3 += 0.1;
	printf("Wartosc w zmiennej wynosi %f.\n", zmienna_3);
	zmienna_3 += 0.1;
	printf("Wartosc w zmiennej wynosi %f.\n", zmienna_3);
	zmienna_3 += 0.1;
	printf("Wartosc w zmiennej wynosi %f.\n", zmienna_3);
	zmienna_3 += 0.1;
	printf("Wartosc w zmiennej wynosi %f.\n", zmienna_3);
	zmienna_3 += 0.1;
	printf("Wartosc w zmiennej wynosi %f.\n", zmienna_3);
	zmienna_3 += 0.1;
	printf("Wartosc w zmiennej wynosi %f.\n", zmienna_3);
	zmienna_3 += 0.1;
	printf("Wartosc w zmiennej wynosi %f.\n", zmienna_3);



	return 0;
}
