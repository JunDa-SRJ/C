//#include<stdio.h>
//
//int main(void){
//    //=================ָ��Ļ������===============
//    //int a = 1;
//    //int* p = &a;
//    ////p = &a;
//    //printf("a�����ĵ�ַΪ: %p\n", p);
//    //printf("a��ֵΪ: %d\n", a);
//    //printf("a��ֵΪ�� %d\n", *p);
//
//  
//    //=================ָ��Ļ������===============
//    //int* ptr = NULL;//��ָ�룬NULLָ�룬ֵΪ���ָ�볣��
//    //int* p = 0;//��ָ�룬��ַΪ0���ڴ棬����ϵͳ�õġ���ָ���κζ���
//    //printf("ptr�ĵ�ַ�ǣ�%p\n",ptr);
//    //printf("p�ĵ�ַ�ǣ� %p\n", p);
//    //if (ptr)//ָ��ptrΪ�ǿ� 
//    //{
//    //
//    //    printf("HelloWorld");
//    //}
//    //if (!ptr)//ָ��ptrΪ�� 
//    //{
//    //
//    //}
//     
//    
//
//    //=======================ָ�������==================
//    int array = {1 , 2 , 3};
//    int i;
//    int* p;
//
//    p = array;
//
//    for (size_t i = 0; i < 3; i++)
//    {
//        printf("array[%d] = %p\n", i, p);
//        printf("array[%d] = %d\n", i, *p);
//         p++;
//    }
//
//    return 0;
//}



//#include<stdio.h>
//
//int main(void) {
//    char a = 'F';
//    int f = 123;
//    char* pa = &a;
//    int* pb = &f;
//    printf("a = %c\n", *pa);
//    printf("f = %d\n", *pb);
//
//    *pa = 'C';
//    *pb += 1;
//    printf("now, a = %c\n", *pa);
//    printf("now, f = %d\n", *pb);
//
//    printf("sizeof pa = %d\n", sizeof(pa));
//    printf("sizeof pb = %d\n", sizeof(pb));
//    
//    printf("the addr of pa is = %p\n", pa);
//    printf("the addr of pb is = %p\n", pb);
//
//
//    return 0;
//         }

//#include<stdio.h>
//int main(void)
//{
//	/*int a;
//	int* p = &a;
//	printf("������һ�������� ");
//	scanf_s("%d",&a);
//	printf("a = %d\n",a);
//	printf("����������һ��������");
//	scanf_s("%d", p);
//	printf("a = %d\n", a);
//*/
//	char str[128];
//	printf("��������C�������� ");
//	scanf_s("%s", str);
//	//printf("��C�����ҵ������ǣ�%s\n", str);
//	printf("str �ĵ�ַ��: %p\n", str);
//	printf("str �ĵ�ַ��: %p\n", &str[0]);
//
//
//	return 0;
//}


#include<stdio.h>
int main()
{
	char a[] = "FishC";
	int b[5] = {1,2,3,4,5};
	float c[5] = {1.1,2.2,3.3,4.4,5.5};
	double d[5] = {1.1,2.2,3.3,4.4,5.5};

	printf("a[0] -> %p, a[1] -> %p, a[2] -> %p", &a[0], &a[1], &a[2]);
	printf("b[0] -> %p, b[1] -> %p, b[2] -> %p", &b[0], &b[1], &b[2]);
	printf("c[0] -> %p, c[1] -> %p, c[2] -> %p", &c[0], &c[1], &c[2]);

	return 0;
}