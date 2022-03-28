#include<stdio.h>
//函数先定义再使用
char FindLetter(char c1, char c2);
double FindMin(int x, int y);

void PrintStar()
{
	printf("********************");
}

void PrintMessage()
{
	extern a;
	printf("%d\n", a);
	printf("你好，世界。我很喜欢学习编程。"); 
}

int a = 3;//外部变量也是全局变量
int b = 5;//外部变量也是全局变量 



//驼峰命名法,类
int FindMax(int a,int b)//局部变量
{
	/*int z;
	z = x > y ? x : y;
	return z;*/
	int z;//局部变量
	return (z = a > b ? a : b);
}
int FuncTest01(int a, int b)
{
	int c;
	if (a > b)
	{
		c = 1;
	}
	else if (a == b)
	{
		c = 0;
	}
	else
	{
		c = -1;
	}
	return c;
}
 float FindAverage(float array[])
{
	int i;
	float aver;
	float sum = 0;
	for (i = 0; i < 10; i++)
	{
		sum += array[i];
		//sum = sum + array[i];
		
	}
	aver = sum / 10;
	return aver;
}
 
int main(void)
{//==========打印函数==========
	/*PrintStar();
	PrintMessage();
	PrintStar();
	*/


	//==========大小比较函数=======
	/*int a;
	int b;
	int c;
	scanf_s("%d,%d", &a, &b);
	c = FindMax(a,b);
	printf("Max is %d", c);*/


	//=========函数的调用============
	/*int i = 2;
	int p;
	p = FuncTest01(i, ++i);
	printf("%d\n", p); */


	//=======将数组做为参数，求平均值======
	/*float score[10];
	float aver;

	int i;
	printf("请输入10个学生的成绩： \n");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%f", &score[i]);
	}
	printf("\n");
	aver = FindAverage(score);
	printf("学生的平均分数为%5.2f",aver);*/
	//========全局变量，局部变量，外部变量=====
	int a = 8;//局部变量
	printf("%d, %d\n", FindMax(a, b),b);
	PrintMessage();

	
	return 0;




}

