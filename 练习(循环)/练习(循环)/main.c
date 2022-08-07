#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>

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

//int main()
//{
//	char arr1[] = "Welcome to here!!!!!\n";
//	char arr2[] = "###################!\n";
//
//	int left = 0;
//	//int right = strlen(arr1);
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//当字符串计算元素个数时，'\0'也会被算，当计算长度时，不会被算
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s", arr2);
//		Sleep(1000);//休息1000ms
//		system("cls");//清屏
//		left++;
//		right--;
//	}
//	printf("%s", arr2);
//	return 0;
//}


//对一个有序数组中查找某一个元素
//int main()
//{
//	//这样查找效率低下，假设查找元素是10，那么最坏要查找10次
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k =7;//假设查找7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下标是%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//	
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//
//	//这种方法叫折半查找法，或者叫二分查找法，时间复杂度为log_2(n)
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//
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
//	{
//		printf("找不到\n");
//	}
//	
//	return 0;
//}


//输入3个数字，按照从大到小顺序打印
int main()
{
	int a, b, c;
	printf("请输入:>");
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)//找出a和b的最大数
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d\n", a, b, c);//a中存最大，b次之，c最小
	return 0;
}


//打印1-100之间3的倍数
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//最大公约数
//方法：辗转相除法
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int r;
//	while (m%n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}


//打印闰年
//1、能被4整除并且不能被100整除是闰年
//2、能被400整除是闰年
//int main()
//{
//	int year;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if(year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//上述代码也可写成
//int main()
//{
//	int year;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


//打印素数
//素数：只能被1和它本身整除
//方法：试除法
//int main()
//{
//	//打印100-200之间的素数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			//能被2--（i-1)之间的数整除，直接break
//			if (i % j == 0)
//				break;
//		}
//		//break和j=i都会跳到这里，所以增加判断
//		//如果j==i,表示上述判断不执行，则为素数
//		if (j == i)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//该代码可以优化，如果一个数不是素数，则可写成i=a*b,并且有结论你，a和b其中一个小于必定开平方i
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//该代码还可以优化。偶数一定不是素数，因此可以直接跳过
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


//编写一个代码。数一下1-100之间所有的数字9个数
// 9,19,29,39,49,59,69,79,89,99
// 90,91,92,93,94,95,96,97,98,99
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//if (i % 10 == 9 || i / 10 == 9)//这样写会把99当做一个来处理
//		if(i%10==9)
//		{
//			count++;
//			printf("%d ", i);
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}


//计算1/1-1/2+1/3... -1/100
//int main()
//{
//	int i = 0;
//	int flag = 1;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//}

//计算10个整数中的最大值
//int main()
//{
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr[] = { -1,-2,-3,-4,-5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	//int max = 0;//这里把max置为0还是有问题，当数组中元素是[-1,-2,-3,-4,-5...]，都比0小时，求得的最大
//				//还是0，因此把max置为arr[0]
//	int max = arr[0];
//	//从第二个元素开始比较
//	for (i = 1; i < sz; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("max = %d\n", max);
//	return 0;
//}


//在屏幕上输出乘法口诀表
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//猜数字游戏
//1、生成随机数
//2、猜数字

//void menu()
//{
//	printf("**********************************\n");
//	printf("****    1、play    0、exit    ****\n");
//	printf("**********************************\n");
//}
//
//#include <time.h>
//void game()
//{
//	int guess;//接受猜的数字
//	//printf("开始游戏\n");
//	//1、生成1-100之间的随机数
//	//int ret = rand()%100 + 1;
//	//printf("%d\n", ret);
//	while (1)
//	{
//		int ret = rand() % 100 + 1;
//		printf("请输入要猜的数字:>");
//		scanf("%d", &guess);
//		if (ret > guess)
//		{
//			printf("猜小了\n");
//		}
//		else if (ret < guess)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了！！\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	//设置时间戳
//	//time_t time(time_t *timer)
//	//srand(unsigned seed)
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("请重新选择:>");
//			break;
//		}
//	} while (input);
//	return 0;
//}