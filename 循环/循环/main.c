#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//c语言是一门 结构化 的程序设计语言
//“结构化”：1、顺序结构 2、选择结构 3、循环结构


//int main()
//{
//	char ch = getchar();
//	putchar(ch);
//	return 0;
//}

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}


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