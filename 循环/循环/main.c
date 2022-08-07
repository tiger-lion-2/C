#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>  //提供strcmp函数  
#include <stdlib.h> //提供system函数

//c语言是一门 结构化 的程序设计语言
//“结构化”：1、顺序结构 2、选择结构 3、循环结构


//shutdown      -s          -t          60
//         设置关机     设置时间关机      60s之后关机
//shutdown      -a
//           取消关机

//int main()
//{
//	char arr[20];
//	system("shutdown -s -t 60");
//error:
//	printf("请注意：你的电脑会在一分钟之后关机，如果输入：我是猪，就取消关机\n请输入:>");
//	scanf("%s", arr);
//	if (strcmp(arr, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto error;
//	}
//	return 0;
//}


//也可以使用循环实现
int main()
{
	char arr[20];
	system("shutdown -s -t 60");
	while (1)
	{
		printf("请注意：你的电脑会在一分钟之后关机，如果输入：我是猪，就取消关机\n请输入:>");
		scanf("%s", arr);
		if (strcmp(arr, "我是猪") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}

//goto语句,不建议使用
//goto语句使用场景
//for (...)
//{
//	for (...)
//	{
//		for (...)
//		{
//			if (disaster)
//				goto error;//error是个标签
//		}
//	}
//}
//
//error:
//	if(disaster)
//		//处理错误情况




//for循环

//for循环的变体
// 
//一道笔试题
//int main()
//{
//	int i = 0;
//	int k = 0;
//	//循环0次，把0赋值为k，为假，不进入循环体
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			//进入内层循环后，j未被初始化，一直是10，所以执行10次
//			printf("haha\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			//执行10*10=100次
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	//for循环的初始化，判断，调整都可以省略，但是for循环的判断省略，判断条件就表示恒为正
//	for (;;)
//	{
//		printf("haha\n");//死循环
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//不要在for循环内部修改变量，会失去控制
//		if (i = 5)
//			printf("haha\n");
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//       初始化；判断条件；调整变量
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	char ch = getchar();
//	putchar(ch);
//	return 0;
//}

//int main()
//{
//	/*int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}*/
//	int ch;
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//scanf只读取空格前的，设置密码为123456 ABCD就会报错
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认密码(Y/N):>");
//	//缓冲区还剩一个'\n'
//	//需要读取'\n'
//	//getchar();
//	int ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("放弃确认");
//	}
//	return 0;
//}


//while语句
//int main()
//{
//	int i = 1;
//
//	while (i <= 10)
//	{
//		if (i == 5)
//			//continue是用于终止本次循环的，也就是本次continue后边的代码不在执行，而是直接跳转到while语句的判断部分，
//			//进入下一次循环的判断
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//
//	/*while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}*/
//
//	//while (i <= 10)
//	//{	
//	//	//打印1-10数字
//	//	printf("%d ", i);
//	//	i++;
//	//}
//	return 0;
//}



//switch语句,用来实现多分支语句
//int main()
//{
//	int day;
//	scanf("%d", &day);//switch表达式必须是整型表达式
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}



//判断一个数是否为奇数
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("%d是奇数\n", num);
//	return 0;
//}


//判断1-100之间的奇数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			count++;
//			printf("%d\n", i);
//		}	
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	while (i < 100) {
//		printf("%d ", i);
//		i += 2;
//	}
//	return 0;
//}


//分支语句也叫选择语句
//int main()
//{
//	//下面分支语句只会被执行其中的一条
//
//	//单分支语句：if(表达式) 语句;
//	//双分支语句: if(表达式) 语句1;else 语句2；
//	//多分支语句：if(表达式) 语句1；elif(表达式）语句2；else 语句3;
//	int age = 30;
//	//单分支
//	//if (age < 18)
//	//	printf("未成年\n");
//
//	//双分支
//	//if (age < 18)
//	//	printf("未成年\n");
//	//else
//	//	printf("成年\n");
//
//	//多分支
//	if (age < 18)
//		printf("未成年\n");
//	else if (age < 28)
//		printf("青年\n");
//	else if (age < 50)
//		printf("壮年\n");
//	else if (age < 90)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//
//
//	//如果我们想比较大小
//	/*int num = 20;*/
//	//if (18 <= num < 30)//首先会判断18是否小于等于40是为真，然后判断1小于等于30是为真，所以整个表达式为真，这样对比是错误的
//	//	printf("hehe");
//
//	//if (18 <= num && num < 30)//这样对比即是正确的
//	//	printf("hehe\n");
//	return  0;
//}

//c语言中以;结尾的代表一条语句
//int main()
//{
//	int a = 10;
//	;//空语句
//	return 0;
//}