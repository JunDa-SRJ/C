#include<stdio.h>

int StaticFunction(int a)
{
	int b = 0;
	static int c = 3;
	b = b + 1;
	return(a + b + c);
}
int main(void)
{
	//auto a = 0;都是等价的
	//int a = 0;
	//auto int a = 0;
	//static x = 0;
	//static int x = 0;
	//printf("a = %d\n",a);
	//printf("x = %d\n", x);
	int a = 2;
	int i;
	for ( i = 0; i < 3; i++)
	{
		printf("%d\n", StaticFunction(a));
	}
	return 0;
}