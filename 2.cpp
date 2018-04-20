#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

main()
{
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int n, m; //размер матрицы    //n - строки  //m - столбцы

	printf("Будет созданна матрица размером n*m\nВведите n: ");
	scanf("%d", &n);
	
	printf("Будет созданна матрица размером n*m\nВведите m: ");
	scanf("%d", &m);
	
	int array[n][m];
		
	for(int i = 0; i < n;i++)	 // заполнение массива
	{
		for(int j = 0; j < m;j++)
		{
			array[i][j] = rand() % 1998 - 999;
		}
	}
	//---------------------------


	printf("-------------------------\nМатрица \n");
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m;j++)
		{
			printf("%5d", array[i][j]);
		}
		printf("\n\n");
	}
	//--------------------------
	
	int array2[n*m];
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m;j++)
		{
			*(array2 + i*m + j) = array[i][j];
		}
	}
	
	//--------------------------
	
	printf("Переобразованный массив:");
	
	for(int i = 0; i < n*m;i++)		printf("%4d ", *(array2 + i));
	
	//--------------------------
	printf("\n\n");
	system("pause");
	
	return 0;
}
