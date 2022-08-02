#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>//Sleep是库函数
#include <stdlib.h>//system也是库函数
#include <math.h>


//猜数字游戏
void menu()
{
	printf("****************************");
	printf("****  1 play    0 exit  ****");
	printf("****************************");
}


int main()
{
	int guess = 0;
	menu();
	printf("请选择:>");
	scanf("%d", &guess);
	do {
		switch (guess)
		{
		case 1:
			//game();
			break;
		case 0:
			break;
		default:
			break;
		}
		return 0;
	} while ();
	
}



//int main()
//{
//	char arr[20] = { 0 };
//	//system(),执行系统命令
//	system("shutdown /s /t 60");
//again:
//	printf("请注意，您的电脑在一分钟内关机，如果输入：我是猪，就取消关机\n请输入:>");
//	scanf("%s", arr);
//	if (strcmp(arr, "我是猪") == 0)
//	{
//		system("shutdown /a");
//	}
//	else {
//		goto again;
//	}
//	return 0;
//}


//屏幕上打印输出九九乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i,j,i*j);//%和d之间出现数字2，如果不够两位就用空格补齐，加-号左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}



//求十个数的最大值
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 1; i <= sz; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max=%d\n", max);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag *(1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count=%d", count);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int count = 0;
//	//for (i = 100; i <= 200; i++)
//	for(i=101;i<=200;i+=2)
//	{
//		//判断i是否为素数（能够被1和他自身整除）
//		//素数判断规则
//		//1、试除法（产生2 -- i-1个数字）
//		int j = 0;
//		//for (j = 2; j < i; j++)
//		for (j=2;j<sqrt(i);j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		//if (j == i)
//		if(j>sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}


//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断闰年
//		//1、能被4整除且不能被100整除
//		//2、能被400整除
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}*/
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


//辗转相除法计算最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int r = 0;
//	printf("请输入两个数:>");
//	scanf("%d%d", &a, &b);
//	while (a % b)
//	{
//		r = a % b;
//		a = b;
//		b = r;
//	}
//	printf("%d", b);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入三个数:>");
//	scanf("%d%d%d", &a,&b,&c);
//	int tmp = 0;
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("从大到小输出为%d,%d,%d:>", a, b, c);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//strcmp用于比较两个字符串大小，如果两个字符串相等，返回0，
//			//如果第一个小于第二个，返回负数，大于则返回正数
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("您已输入三次，密码均错误\n");
//	}
//	return 0;
//}



//int main()
//{
//	//编写代码，演示多个字符从两端移动，向中间汇聚
//	//welcome to bit!!!!!!
//	//####################
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	int right = strlen(arr1) - 1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//单位是ms,1000ms就是1s
//		//system("cls");//执行系统命令的一个函数
//		left++;
//		right--;
//		
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//二分法
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到了");
//
//	return 0;
//}

//计算1！+2!+3!+....+10!
//int main()
//{
//	int i = 1;
//	int result = 0;
//	int n = 0;
//	
//	//printf("请输入数字:");
//	//scanf_s("%d", &n);
//	for (n = 1; n <= 3; n++)
//	{
//		int mul = 1;
//		for (i; i <= n; i++)
//		{
//			mul *= i;
//			//1*1
//			//1*2
//			//1*2*3
//		}
//		//n的阶乘
//		result += mul;
//	}
//	printf("result=%d\n", result);
//	return 0;
//}


////计算n的阶乘
//int main()
//{
//	int i = 0;
//	int mul = 1;
//	int n = 0;
//	printf("请输入数字：");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//		mul *= i;
//	printf("%d的阶乘是%d\n", n, mul);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int k = 0;
//	for (a = 0, k = 0; k = 0; a++, k++)//表达式2不是判断语句，为赋值语句，把0赋值给k，为假，所以不执行循环
//		k++;
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	printf("请输入两个数：");
//	scanf("%d%d", &a, &b);
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	printf("max=%d\n", max);
//	return 0;
//}
//int main()
//{
//	//可以省略，但不要随便省略
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	for (a=1; a <= 10; a++)//表达式1为初始化部分，表达式2为判断部分，表达式3为调整部分
//		printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	for (i; i <= 10; i++)
//		if (i % 2 == 0)
//			printf("%d\n", i);
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[10] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//输入密码，并存放在password中
//	//此时输入缓冲区还剩一个“\n”
//	//getchar();//如果输入12345 ABCD还是有问题
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("确认成功");
//	else
//		printf("确认失败");
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//EOF-- end of file ，文件结束标志， 值为-1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	/*ch = getchar();
//	putchar(ch);
//	printf("%c\n", ch);*/
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	while (i <= 9)
//	{
//		i++;
//		printf("%d\n", i);
//	}
//	return 0;
//


//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	//switch语句一般解决多分支问题
//	//switch语句中不会出现continue语句
//	switch (day)//括号里的表达式是整型表达式
//	{
//	case 1://case后边是整型常量表达式
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
//		printf("星期天\n");
//		break;
//	default:
//		printf("上述路走不通\n");
//	}

	//if-else解决双分支问题
	/*if (1 == day)
		printf("星期一");
	else if (2 == day)
		printf("星期二");
	else if (3 == day)
		printf("星期三");*/
	 


	//return 0;
//}

//int main()
//{
//	int i = 1;
//	while(i<=100)
//	{
//		if (i%2 != 0)
//			printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 4;
//	if (5 == a) //变量和常量比大小时，常量放在前，避免把两个等号写成一个等号产生bug
//	{
//		printf("哈哈\n");
//	}
//	//if(a = 5) //赋值操作符
//	//{
//	//	printf("呵呵\n");
//	//}
//	return 0;
//}



//悬空else，else与离他最近的那个未匹配的if组合
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}


//int main()
//{
//	//if-else语句要是控制多条语句，则用大括号括起来
//
//	int age = 20;
//	if (age < 18)
//		printf("未成年\n");
//	else
//	{
//		if (age >= 18 && age < 28)
//		printf("青年\n");
//		else if (age >= 28 && age < 50)
//		printf("中年\n");
//		else if (age >= 50 && age < 90)
//		printf("老年\n");
//		else
//		printf("老不死\n");
//
//	}
//	/*else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("中年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else
//		printf("老不死\n");*/
//
//	return 0;
//}