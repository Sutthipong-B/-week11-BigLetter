#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char letter[1000], * A;
	A = letter;
	int n = 0;
	scanf("%s", &letter);

	for (int i = 0; *(A + i) != '\0'; i++)
	{
		if (*(A + i) >= 65 && *(A + i) <= 90)
		{
			printf("%c", *(A + i) + 32);
		}
		else if (*(A + i) >= 91 && *(A + i) <= 122)
		{
			printf("%c", *(A + i) - 32);
		}
		else
		{
			printf("\nERROR");
			return 0;
		}
	}
	return 0;
}