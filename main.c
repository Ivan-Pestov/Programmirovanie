#include <stdio.h>
int main()
{
	float s;
	float a;
	float eps;
	int i;
	int sign;
  
	printf("eps=");
	scanf_s("%f", &eps);
  
	s = 0;
	sign = 1;
	i = 1;
	a = (i + 2) / (i*(i + 1));
	s = s + a;
	i = i + 1;
  
	while (a > eps);
	{
		sign = -sign;
		a = (i + 2) / (i*(i + 1));
		s = s + a * sign;
		i = i + 1;
	}
	printf("s=%f", s);
	return 0;
}
