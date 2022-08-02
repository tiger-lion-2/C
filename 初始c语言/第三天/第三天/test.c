#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//#define 定义常量
#define MAX 100;
//define定义宏
#define MAX(X,Y) (X>Y?X:Y)

//函数
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	//int a = MAX;
	int x = 10;
	int y = 20;
	//函数
	int max = Max(x, y);
	printf("max=%d\n", max);
	//宏
	max = MAX(x, y);
	//max = (x>y?x:y)
	printf("max=%d\n", max);
	return 0;
}



//static修饰局部变量
//局部变量的生命周期变长
//static修饰全局变量
//改变了变量的作用域，让静态的全局变量只能在自己的源文件内部使用,
//出了源文件就没法使用了

//static修饰函数改变了函数的链接属性
//外部链接属性 -- 内部链接属性

//声明外部函数
//extern int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	//extern - 声明外部符号
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}


//void test()
//{
//	//int a = 1; //输出5个2
//	static int a = 1;
//	a++;
//	printf("a=%d\n", a);//2,3,4,5,6
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	//typedef -- 类型定义 -- 类型重定义
//	typedef unsigned int u_int;//u_int是别名
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;
//}
//int main()
//{
//	register int a = 10;//建议把a定义成寄存器变量
//	return 0;
//}

//int main()
//{
//	int a = 30;
//	int b = 20;
//	int max = 0;
//	max = a > b ? a: b;//条件运算符
//	printf("max=%d\n", max);
//	return 0;
//}

//int main()
//{
//	//强制类型转换，不建议使用
//	int a = (int)3.14;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;// a++叫后置++，先使用，后++
//	int c = ++a;//++a叫前置++，先++，后使用
//	printf("a=%d b=%d\n", a, b);
//	printf("a=%d c=%d\n", a, c);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = ~a;//有符号的整型，最高位是1表示负数，为0则表示正数
//	//~按二进制位取反
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//原码、反码、补码
//	// 原码符号位不变，其余位取反得到反码，反码+1得到补码
//	
//	//负数在内存中存储的时候，存储的是二进制的补码
//
//	//11111111111111111111111111111111 -- 补码
//	//11111111111111111111111111111110 -- 反码
//	//10000000000000000000000000000001 -- 原码
//
//
//	printf("%d\n", b);//-1，打印的是这个数的原码
//	return 0;
//}
//
//
//
//int main()
//{
//	int a = 3;
//	//00000000000000000000000000000011
//	
//	int b = ~a;
//	//11111111111111111111111111111100
//	
//
//	//11111111111111111111111111111100 - 补码
//	//11111111111111111111111111111011 - 反码
//	//10000000000000000000000000000100 - 原码
//
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = -4;
//	//10000000000000000000000000000100 -- 原码
//	int b = ~a;
//	//01111111111111111111111111111011
//
//	//01111111111111111111111111111011 -- 补码
//	//01111111111111111111111111111010 -- 反码
//	//00000000000000000000000000000101 -- 原码
//	printf("%d\n", b);
//	return 0;
//}

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int max = 0;
//	max = Max(3, 4);
//	printf("max=%d\n", max);
//	return 0;
//}
// 

//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("%d\n", num1);
//	else
//		printf("%d\n", num2);
//
//	return 0;
//}

//int main()
//{
//	//字符串结束标志：'\0'
//	//'\0' -- 转义字符 -- 0
//	//0 -- 数字
//	//'0' -- 字符 -- 48
//	char arr[10] = "hello bit";
//	printf("%d\n", strlen(arr));
//	return 0;
//}