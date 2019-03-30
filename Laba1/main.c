#include <stdio.h>

int main()
{
    float v1;//начальная скорость
	float v2;//конечная скорость
	float t;//время
	float s;//пройденный путь
	float a;//ускорение

	printf("v1=");
	scanf_s("%f", &v1);

	printf("v2=");
	scanf_s("%f", &v2);
	
	printf("t=");
	scanf_s("%f", &t);
	
	a = (v2 - v1) / t;
	
	s = (v2*v2 - v1*v1) / (2 * a);
	
	printf("distance=%f\n", s);
	return 0;
}
