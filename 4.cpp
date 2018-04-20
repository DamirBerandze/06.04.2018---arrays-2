#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>


main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int n;
	
	printf("Будут созданы две матрицы размера n*n. Введите n: ");
	scanf("%d", &n);
	
	int array1[n*n];
	int array2[n*n];
	
	for(int i = 0; i < n*n; i++)	*(array1 + i) = rand() % 200 - 100;
	for(int i = 0; i < n*n; i++)	*(array2 + i) = rand() % 200 - 100;
	printf("--------------------------------------\nМатрица №1:\n");
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%4d", *(array1 + j + i*n));
		}
		printf("\n\n");
	}
	
	printf("--------------------------------------\nМатрица №2:\n");
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%4d", *(array2 + j + i*n));
		}
		printf("\n\n");
	}
	
	int array3[n*n];
	
	printf("--------------------------------------\nМатрица №3:\n");
	for(int i = 0; i < n*n; i++)	
		if(*(array1 + i) > *(array2 + i))	*(array3 + i) = *(array1 + i);
		else	*(array3 + i) = *(array2 + i);
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%4d", *(array3 + j + i*n));
		}
		printf("\n\n");
	}
	
	system("pause");
	
	return 0;
}
