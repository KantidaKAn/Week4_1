#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num;
	scanf("%d", &num);
	if (num < 0)
	{
		printf("PLease insert the number that is greater or equal zero");
		return 0;
	}
	else if (num >= 0)
	{
		if (num >= 80)
		{
			printf("A");
			return 0;
		}
		else if (num >= 70)
		{
			printf("B");
			return 0;
		}
		else if (num >= 60)
		{
			printf("C");
			return 0;
		}
		else if (num >= 50)
		{
			printf("D");
			return 0;
		}
		else if (num < 50)
		{
			printf("F");
			return 0;
		}
	}
	return 0;
}