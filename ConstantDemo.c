#include<stdio.h>
//�����ȶ�����ʹ��
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
	printf("��ã����硣�Һ�ϲ��ѧϰ��̡�"); 
}

int a = 3;//�ⲿ����Ҳ��ȫ�ֱ���
int b = 5;//�ⲿ����Ҳ��ȫ�ֱ��� 



//�շ�������,��
int FindMax(int a,int b)//�ֲ�����
{
	/*int z;
	z = x > y ? x : y;
	return z;*/
	int z;//�ֲ�����
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
{//==========��ӡ����==========
	/*PrintStar();
	PrintMessage();
	PrintStar();
	*/


	//==========��С�ȽϺ���=======
	/*int a;
	int b;
	int c;
	scanf_s("%d,%d", &a, &b);
	c = FindMax(a,b);
	printf("Max is %d", c);*/


	//=========�����ĵ���============
	/*int i = 2;
	int p;
	p = FuncTest01(i, ++i);
	printf("%d\n", p); */


	//=======��������Ϊ��������ƽ��ֵ======
	/*float score[10];
	float aver;

	int i;
	printf("������10��ѧ���ĳɼ��� \n");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%f", &score[i]);
	}
	printf("\n");
	aver = FindAverage(score);
	printf("ѧ����ƽ������Ϊ%5.2f",aver);*/
	//========ȫ�ֱ������ֲ��������ⲿ����=====
	int a = 8;//�ֲ�����
	printf("%d, %d\n", FindMax(a, b),b);
	PrintMessage();

	
	return 0;




}

