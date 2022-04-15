#include<stdio.h>
int fun(int b,int b);
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
	while(1)
	{
		getchar();
	}
	int b ;
	printf("Please Input b:");
	scanf("%d",&b); 
	fun(a,b);

	printf("%d  ___   %c\n",a,ch);
	return 0;
}
int fun(int a,int b)
{
	return a + b;
}
