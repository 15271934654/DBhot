#include<stdio.h>
int main()
{
	int a = 10;

	char ch[] = "Hello world!";
	int *p = a;
	for(int i = ；i < 10;i++)
	{
		a += i;
		printf("%d  ____\n",*p);
		p++;

	}

	printf("%d  ___   %c\n",a,ch);
	return 0;
}
