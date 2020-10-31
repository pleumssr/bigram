#include<stdio.h>
int main()
{
	int a[100];
	a[0] = 0;
	int i = 0;
	int x = 0;//00
	int y = 0;//01
	int z = 0;//10
	int t = 0;//11
	while (true)
	{
		scanf_s("%d", &a[i]);
		if (a[i] != 0 && a[i] != 1)
		{
			break;
		}
		i++;
	}

	for (int j = 0; j < i; j++)
	{
		if (a[j] == 0 && a[j + 1] == 0)
		{
			x++;
		}
		if (a[j] == 0 && a[j + 1] == 1)
		{
			y++;
		}
		if (a[j] == 1 && a[j + 1] == 0)
		{
			z++;
		}
		if (a[j] == 1 && a[j + 1] == 1)
		{
			t++;
		}
	}
	printf("---ans---\n");
	printf("00 : %d\n", x);
	printf("01 : %d\n", y);
	printf("10 : %d\n", z);
	printf("11 : %d", t);

	return 0;
}