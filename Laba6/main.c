#include <stdio.h>
#define K 3
#define N 4
int main(void)
{
	int x[K][N]; // массив из K на N элементов
	int min_i, min_j; // минимальный элемент
	int i, j;
	min_i = 0;
	min_j = 0;
	// ввод массива
	for (i = 0; i < K; i++)
		for (j = 0; j < N; j++)
			scanf_s("%d", &x[i][j]);
	// наименьший элемент
	for (i = 0; i < K; i++)
		for (j = 0; j < N; j++)
			if (x[i][j] < x[min_i][min_j])
			{
				min_i = i;
				min_j = j;
			}
	// выборочное обнуление элементов
			for (i = 0; i < K; i++)
			{
				x[i][min_j] = 0;
			}
			for (i = 0; i < N; i++)
			{
				x[min_i][i] = 0;
			}
	// вывод массива
	for (i = 0; i < K; i++)
	{
		for (j = 0; j < N; j++)
			printf("%4d ", x[i][j]);
		printf("\n");
	}
	return 0;
}
