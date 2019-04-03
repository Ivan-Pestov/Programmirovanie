#include <stdio.h>
int main()
{
    float s;
	float a;
	float eps;
	int i;
	int sign;

	printf_s("eps=\n");
	scanf_s("%f", &eps);
	s = 0.0;
	sign = 1;
	i = 2;
	a = 1.5;
	
	while (a > eps)
	{
		sign = (-1)*sign;
		a = (i + 2) / (i*(i + 1.0));
		s = s + a * sign;
		i = i + 1;
	}
	printf_s("s=%f\n", s);
	return 0;
}
