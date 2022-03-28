//#include<stdio.h>
//
//int main(void){
//    //=================指针的基础理解===============
//    //int a = 1;
//    //int* p = &a;
//    ////p = &a;
//    //printf("a变量的地址为: %p\n", p);
//    //printf("a的值为: %d\n", a);
//    //printf("a的值为： %d\n", *p);
//
//  
//    //=================指针的基础理解===============
//    //int* ptr = NULL;//空指针，NULL指针，值为零的指针常量
//    //int* p = 0;//空指针，地址为0的内存，操作系统用的。不指向任何东西
//    //printf("ptr的地址是：%p\n",ptr);
//    //printf("p的地址是： %p\n", p);
//    //if (ptr)//指针ptr为非空 
//    //{
//    //
//    //    printf("HelloWorld");
//    //}
//    //if (!ptr)//指针ptr为空 
//    //{
//    //
//    //}
//     
//    
//
//    //=======================指针的运算==================
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
//	printf("请输入一个整数： ");
//	scanf_s("%d",&a);
//	printf("a = %d\n",a);
//	printf("请重新输入一个整数：");
//	scanf_s("%d", p);
//	printf("a = %d\n", a);
//*/
//	char str[128];
//	printf("请输入鱼C的域名： ");
//	scanf_s("%s", str);
//	//printf("鱼C工作室的域名是：%s\n", str);
//	printf("str 的地址是: %p\n", str);
//	printf("str 的地址是: %p\n", &str[0]);
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