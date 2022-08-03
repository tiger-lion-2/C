#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

//计算n的阶乘
//int main()
//{
//	int ret = 1;
//	int i = 0;
//	int num;
//	scanf("%d", &num);
//	for (i = 1; i <= num; i++)
//	{
//		ret *= i;
//	}
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	int ret = 1;
//	int num;
//	int i;
//	scanf("%d", &num);
//	for (i = num; i > 0; i--)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//计算1！+2！+3！+ ....+ 10!
//分析以下代码错在哪？
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	for (n = 1; i <= 3; n++)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
//提示登录成，如果三次均输入错误，则退出程序。

//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)  //字符串比较不能用等于号，要用strcmp,如果相等，返回0；如果前者
//												//大于后者，返回大于0的数,反之返回小于0的数
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("退出程序\n");
//	}
//	return 0;
//}


// 编写代码，演示多个字符从两端移动，向中间汇聚。

int main()
{
	char arr1[] = "Welcome to here!!!!!\n";
	char arr2[] = "###################!\n";

	int left = 0;
	//int right = strlen(arr1);
	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//当字符串计算元素个数时，'\0'也会被算，当计算长度时，不会被算

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s", arr2);
		Sleep(1000);//1000ms
		system("cls");//清屏
		left++;
		right--;
	}
	printf("%s", arr2);
	return 0;
}