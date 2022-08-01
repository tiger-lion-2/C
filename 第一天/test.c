#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//变量的作用域和周期
//限定这个名字的可用性的代码范围就是这个名字的作用域


int main()
{
	//如何声明，使用关键字extern,声明外部符号的
	extern int g_val;
	printf("%d\n", g_val);//报错为未声明的标识符，则声明
	return 0;
}


//全局变量的作用域是整个工程
//int main()
//{
//	{
//		//局部变量的作用域是变量所在的局部范围
//		int num = 0;//num的作用域只在这个大括号内部有效
//	}
//	printf("%d\n", num);
//	return 0;
//}


//int main()
//{
//	int num1 = 0; 
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);//把输入的两个数放在地址为num1和num2的地方
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}



//当全局变量和局部变量的变量名相同时，局部变量优先使用，建议不要相同
//int global = 2019; //全局变量
//
//int main()
//{
//	int local = 2018; // 局部变量
//	int global = 2020; //局部变量
//	printf("global=%d\n", global);//2020
//	return 0;
//}


//int num2 = 20;  //全局变量--定义在代码块({})之外的变量
//int main()
//{
//	int num1 = 10; //局部变量--定义在代码块({})内的变量
//
//	return 0;
//}

//int main()
//{
//	//年龄-20
//	short age = 20; //向内存申请2个字节=16bit位，用来存放20
//	float weight = 96.5; //向内存申请4个字节，用来存放小数
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	return 0;
//}
//char--字符类型
//%d -- 打印整形
//%c -- 打印字符
//%f -- 打印浮点型--打印小数
//%p -- 以地址形式打印
//%x -- 打印十六进制数字
//int main()
//{
//	//char ch = 'A';//向内存申请一块空间命名为ch
//	//printf("%c\n", ch);//表示打印字符格式的数据
//	//short int
//	//int
//	//int age = 10;
//	//printf("%d\n", age); //打印整数十进制格式的数据
//	//long
//	/*long num = 100;
//	printf("%d\n", num);*/
//	double d = 3.14;
//	printf("%lf", d);
//	return 0;
//}

//int main() //主函数 -- 程序的入口--有且仅有一个
//{
//	//printf--打印函数
//	//库函数：c语言本身提供给我们使用的函数
//	//打招呼：#include <stdio.h>
//	printf("hehe\n");
//	return 0;
//}


//int 是整型的意思
//main函数前边的int表示main函数调用后返回一个整型值
//int main()
//{
//
//	return 0; //返回0
//}