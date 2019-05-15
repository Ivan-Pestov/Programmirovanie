#include <stdio.h>
#define N 10

int main()
{
	int x[N];
	int i;
	float q;
	int F=1;
	for (i = 0; i < N; i++)
		scanf_s("%d", &x[i]);
	if (x[0] == 0)
	{
		printf("false\n");
		return 0;
	}
	q = (float)x[1] / (float)x[0];
	for (i = 0; i < N-1; i++)
	{
		if ((float)(x[i+1]/x[i])!=q)
			F = 0;
	}
	if (F==1)
		printf("true\n");
	else
		printf("false\n");
	return 0;
}
