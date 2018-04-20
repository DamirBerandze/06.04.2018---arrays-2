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
	
	int a = 0;   //2-х значные элементы
	int b = 0;	 //3-х значные элементы
	int amounta = 0;
	int amountb = 0;
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m;j++)
		{
			if(((array[i][j] < 100) && (array[i][j] > 9)) || ((array[i][j] < -9) && (array[i][j] > -100)))	
			{
				a++;
				amounta += array[i][j]; 
			}
			if((array[i][j] > 99) || (array[i][j] < -99))	
			{
				b++;
				amountb += array[i][j]; 
			}
		}
	}
	
	printf("------------------------------------\n");
	printf("Количестов 2-х значных элементов матрицы: %d\n", a);
	printf("Количестов 3-х значных элементов матрицы: %d\n", b);
	printf("Среднее арифметическое 2-х значных элементов матрицы: %d\n", amounta/a);
	printf("Среднее арифметическое 3-х значных элементов матрицы: %d\n", amountb/b);
	
	//--------------------------
	printf("\n\n");
	system("pause");
	
	return 0;
}
