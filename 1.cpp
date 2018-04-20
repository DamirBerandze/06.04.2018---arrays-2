#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

main()
{
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int n; //размер матрицы

	printf("Будет созданна матрица размером n*n\nВведите n: ");
	scanf("%d", &n);
	
	int array[n*n];
	
	*(array) = 0;
		
	for(int i = 1; i < n*n;i++)		*(array + i) = rand() % 200 - 100; // заполнение массива
	//---------------------------
	int h = n;
	
	printf("-------------------------\nМатрица \n");
	
	for(int i = 0; i < h; i++)
	{
		for(int j = 0; j < n;j++)
		{
			printf("%5d", *(array + j + h*i));
		}
		printf("\n\n");
	}
	//--------------------------
	printf("Положительные элементы главной диагонали массива:");
	
	for(int i = 0; i < n ;i++) 
	{
		if(*(array + i*n + i) >= 0)		printf(" %d,", *(array + i*n + i));
	}
	//--------------------------
	printf("\n\n");
	system("pause");
	
	return 0;
}
