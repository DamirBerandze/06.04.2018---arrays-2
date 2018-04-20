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
			array[i][j] = rand() % 199 - 99;
		}
	}
	//---------------------------
	int sum_line[n];
	int sum_tower[m];
	//---------------------------
	for(int i = 0; i < n; i++)	sum_line[i] = 0;	//обнуление
	//---------------------------
	for(int i = 0; i < m; i++)	sum_tower[i] = 0;	//обнуление
	//---------------------------
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m;j++)
		{
			sum_line[i] += array[i][j];
		}
	}
	//---------------------------
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m;j++)
		{
			sum_tower[j] += array[i][j];
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
		printf("    |%5d\n",sum_line[i]);
	}
	
	for(int i = 0; i < m; i++)	printf("______");
	printf("\n");
	
	for(int i = 0; i < m; i++)
	{
		printf(" %4d", sum_tower[i]);
	}
	
	printf("\n");
	
	system("pause");
	
	return 0;
}
