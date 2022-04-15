#include<stdio.h>
int dev(char*p);
int fun(int b,int b);
int main()
{
	int a = 10;

	char ch[] = "Hello world!";
	printf("__%s\n");
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
	edv(ch);
	printf("__%s\n",ch);
	int b ;
	printf("Please Input b:");
	scanf("%d",&b); 
	fun(a,b);
	printf("%d  ___   %c\n",a,ch);
	return 0;
}

int dev(char*p)
{
	while(*p)
	{
		*p += ' ';
		p++;
	}

int fun(int a,int b)
{
	int c = 100;
	return a + b + c;
}
