#include <stdio.h>
#define YES 1
#define NO 0
#define MAXLINE 1000

void process_line(char buffer[]);

int main()
{
	char line[MAXLINE];

	fgets(line, 1000, stdin);
	process_line(line);
	fputs(line, stdout);
	return 0;
}

void process_line(char buffer[])
{
	char c;
	int flag;
	int found;
	int nFlag;
	int i;
	int start;
	int j;
	int a;
	char word[50];
	int end;

	flag = NO;
	found = NO;
	nFlag = NO;
	start = 0;
	i = 0;

	do
	{
		c = buffer[i];

		if (c == ' ' || c == '.' || c == ',' || c == '\n' || c == '\0')
		{
			if (flag == YES)
			{
				word[j] = '\0';
				j = 0;
				while (word[j] != '\0')
				{
					a = j + 1;
					while (word[a] != '\0')
					{
						if (word[j] == word[a])
						{
							found = YES;
							break;
						}
						a++;
					}
					if (found == YES || nFlag == YES)
					{
						for (j = start, end = i; buffer[end] != '\0'; j++, end++)
							buffer[j] = buffer[end];

						while (j < end)
						{
							buffer[j] = '\0';
							j++;
						}

						i = start - 1;
						break;
					}
					j++;
				}
			}
			found = NO;
			flag = NO;
			nFlag = NO;
			i++;
		}
		else if (c >= '0' && c <= '9')
		{
			if (flag == NO)
			{
				j = 0;
				start = i;
				flag = YES;
				word[j] = c;
			}
			nFlag = YES;
			i++;
		}
		else
		{
			if (flag == NO)
			{
				j = 0;
				start = i;
				flag = YES;
				word[j] = c;
			}
			else
			{
				word[j] = c;
			}
			j++;
			i++;
		}
	}
	while (c != '\0');
}
