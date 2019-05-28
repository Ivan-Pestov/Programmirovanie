#include <stdio.h>
#include <stdlib.h>

#define mask1	0x80000000

void print_binary(long int num);

int main(void)
{
	long int N = 0;
	unsigned int mask = 0;
	int i = 0, maxNum = 0, flag = 0, cnt = 0;

	printf("Enter your N = ");
	scanf_s("%i", &N);
	print_binary(N);
	mask = mask1;

	for (i = 0; i <= sizeof(long) * 8; i++)
	{
		if ((N & mask) != 0 && i != sizeof(long) * 8)
		{
			if (flag == 0)
				flag = 1;

			cnt++;
		}
		else
		{
			if (cnt > maxNum)
				maxNum = cnt;
			cnt = 0;
			flag = 0;
		}
		mask = mask >> 1;
	}

	printf("\nThe biggest series of single discharges = %d\n\n", maxNum);

	system("pause");
	return 0;
}

void print_binary(long int num)
{
	int i = 0;
	unsigned int mask = mask1;
	printf("\nbinary N: ");
	for (i = 1; i <= 32; i++)
	{
		if ((num & mask) == 0)
			printf("0");
		else
			printf("1");

		if ((i % 8) == 0)
			printf(" ");

		mask = mask >> 1;
	}
	printf("\n");
	return;
}
