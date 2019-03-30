#include "pch.h"
#include <stdio.h>
#define YES 1
#define NO 0

int main()
{
    int c;
	int flag;
	int cnt;

	cnt = 0;
	flag = NO;

	while ((c = getchar()) != EOF)
	{
		if (c >= '0' && c <= '9')
		{
			if (flag == NO && c != '0') 
			{
				cnt = cnt + 1;          
			}
			
			flag = YES;
		}
		else if (c >='a' && c <= 'z' || c >= 'A' && c <= 'Z')  
		{
			flag = YES;
		}
		else       
		{
			if(c != '.')  
			flag = NO;
		}
	}
	printf("amount of numbers=%d\n", cnt);
	return 0;
}
