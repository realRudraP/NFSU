#include <stdio.h>

int maxOfThree(int, int, int);
void main()
{
	int in[3], max;
	for (int i = 0; i < 3; i++)
	{
		printf("Enter the number %d: ", i + 1);
		scanf("%d", &in[i]);
	}

	max = maxOfThree(in[0], in[1], in[2]);
	printf("The biggest number is %d", max);
}

int maxOfThree(int a, int b, int c)
{
	int res;
	if (a > b)
	{
		if (a > c)
		{
			res = a;
		}
		else
		{
			res = c;
		}
	}
	else
	{
		if (b > c)
		{
			res = b;
		}
		else
		{
			res = c;
		}
	}

	return res;
}
