#include<stdio.h>
int main()
{
	int a;
	printf("From 2 to ");
	scanf_s("%d", &a);
	int x=1;
	while (x<=a)
	{
		if (x % 3 == 0)
		{
			if (x % 2 == 0)
			{
				printf("%d\n", x);
			}
		}
		x++;
	}
	printf("These are numbers that have 2 and 3 as one of their factors.\n");
	return 0;
}