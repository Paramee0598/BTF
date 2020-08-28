#include<stdio.h>

int main()
{
	int r, h, d, sp;//r = row, h = height, d = digit, sp = space
	printf("Enter height: ");
	scanf_s("%d", &h);
	///////////up/////////////////
	for (r = 1; r <= h - 1; r++)
	{
		for (d = 1; d <= r; d++)
			printf("O");
		for (sp = 1; sp <= 2 * (h - r); sp++)
			printf(" ");
		printf("\b");
		for (d = r; d >= 1; d--)
			printf("O");
		printf("\n");

	}
	////////down///////////////////
	for (r = h; r >= 1; r--)
	{
		for (d = 1; d <= r; d++)
			printf("O");
		for (sp = 1; sp <= 2 * (h - r); sp++)
			printf(" ");
		printf("\b");
		for (d = r; d >= 1; d--)
			printf("O");
		printf("\n");

	}
	return 0;
}