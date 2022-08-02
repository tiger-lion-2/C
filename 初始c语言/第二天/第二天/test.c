#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	int sz = 0;
//	int arr[10] = { 0 }; //存放10个整型元素的数组
//	//10 * sizeof(int) 
//	printf("%d\n", sizeof(arr));
//	//计算数组元素个数
//	// 个数 = 总大小/每个元素大小
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz=%d\n", sz);
//	//int a = 10;
//	//sizeof计算的是变量/类型所占空间的大小，单位是字节
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof(int));//4
//	//printf("%d\n", sizeof a);//4
//	//当sizeof计算变量大小的时候，我们可以把两边括号取掉，但是计算类型大小的时候，不能省去括号
//	return 0;
//}

//int main()
//{
//	//&按位与
//	//|按位或
//	//^按位异或
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	int d = a | b;
//	int e = a ^ b;
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", e);
//	return 0;
//}

//int main()
//{
//	//移位操作符：移的是2进制位
//	int a = 20;
//	//a 是整型，占4个字节，是32位
//	//00000000000000000000000000000101
//	//a << 3;
//	int b = a << 3;
//	int c = a >> 3;
//	//>>右移
//	//<<左移
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	/*int a = 1;
//	int b = 2;
//	int c = 3;*/
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个存放10个整数数字的数组
//	//printf("%d\n", arr[4]); //用下标访问元素
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	//char arr[5];
//	//float arr[20];
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	sum = Add(num1, num2);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 1000)
//	{
//		printf("敲代码\n");
//		line++;
//
//	}
//	printf("好offer\n");
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("那你要好好学习吗？(1/0):>");
//	scanf_s("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}
//

//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c")); //13
//	//\32,32代表2个8进制数字   \ddd代表1-3个8进制数字  \xdd代表2个16进制的数字
//	//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
//	//32 --> 10进制：26 --> →
//	return 0;
//}


//int main()
//{
//	//printf("c:\test\32\test.c");\t是水平制表符
//	printf("c:\\test\\32\\test.c");
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", strlen(arr1)); //3，在计算字符串长度时，'\0'是结束标志，但不是计算内容
//	printf("%d\n", strlen(arr2)); //随机值
//	return 0;
//}




//int main()
//{
//	char arr1[] = "abc"; //数组
//	//数据在计算机上存储的时候，是以二进制形式存储的。
//	// a - 97
//	// A - 65
//	// 
//	// ASCII编码
//	//abc构成 -- 'a', 'b', 'c','\0','\0'的值是0,意思是字符串的结束标志
//	char arr2[] = { 'a', 'b', 'c', 0};// 这里末尾添加0相当于加了'\0'
//	printf("%s\n", arr1);
//	printf("%s\n", arr2); 
//	return 0;
//}


//常量
//1、字面常量
//2、const修饰的常变量
//3、#define定义的标识符常量
//4、枚举常量

//枚举--一一列举
//性别；男，女，保密
// 三原色：红，绿，蓝
// 星期：1 2 3 4 5 6 7 
//
//枚举关键字 -- enum
// 

enum Color
{
	RED,
	YELLOW,
	BLUE
};

int main()
{
	//枚举类型创建的变量是可以改变的，但是枚举常量是不能改变的
	enum Color c = RED;
	c = YELLOW;
	RED = 6;
	return 0;
}
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};

////MALE,FEMALE, SECRET --- 枚举常量，是枚举类型可能的取值

//int main()
//{
//	/*enum Sex s = MALE;*/
//	printf("%d\n", MALE); //0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}



//#define 定义的标识符常量
//#define MAX 10
//int main()
//{
//	int array[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}

//int main()
//{
//	//const int n = 10;//n是变量，但是又有常属性，我们能让它成为不能变的变量
//	//int array[10] = { 0 };
//	//const修饰的常变量，不可被改变
//	/*const int num = 4;
//	printf("%d\n", num);*/
//	/*num = 8;
//	printf("%d\n", num);*/
//	//3;//字面常量
//	return 0;
//}
