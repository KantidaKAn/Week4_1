#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x;
	scanf("%d", &x);
	if (x < 0)
	{
		printf("PLease insert the number that is greater or equal zero");
		return 0;
	}
	else if (x >= 0)
	{
		if (x > 80)
		{
			printf("A");
			return 0;
		}
		else if (x >= 70)
		{
			printf("B");
			return 0;
		}
		else if (x >= 60)
		{
			printf("C");
			return 0;
		}
		else if (x >= 50)
		{
			printf("D");
			return 0;
		}
		else if (x < 50)
		{
			printf("F");
			return 0;
		}
	}
	return 0;
}