#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>

//����n�Ľ׳�
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


//����1��+2��+3��+ ....+ 10!
//�������´�������ģ�
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



//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ��
//��ʾ��¼�ɣ�������ξ�����������˳�����

//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)  //�ַ����Ƚϲ����õ��ںţ�Ҫ��strcmp,�����ȣ�����0�����ǰ��
//												//���ں��ߣ����ش���0����,��֮����С��0����
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("�˳�����\n");
//	}
//	return 0;
//}


// ��д���룬��ʾ����ַ��������ƶ������м��ۡ�

//int main()
//{
//	char arr1[] = "Welcome to here!!!!!\n";
//	char arr2[] = "###################!\n";
//
//	int left = 0;
//	//int right = strlen(arr1);
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//���ַ�������Ԫ�ظ���ʱ��'\0'Ҳ�ᱻ�㣬�����㳤��ʱ�����ᱻ��
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s", arr2);
//		Sleep(1000);//��Ϣ1000ms
//		system("cls");//����
//		left++;
//		right--;
//	}
//	printf("%s", arr2);
//	return 0;
//}


//��һ�����������в���ĳһ��Ԫ��
//int main()
//{
//	//��������Ч�ʵ��£��������Ԫ����10����ô�Ҫ����10��
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k =7;//�������7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±���%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
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
//	//���ַ������۰���ҷ������߽ж��ֲ��ҷ���ʱ�临�Ӷ�Ϊlog_2(n)
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
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	
//	return 0;
//}


//����3�����֣����մӴ�С˳���ӡ
int main()
{
	int a, b, c;
	printf("������:>");
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)//�ҳ�a��b�������
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
	printf("%d %d %d\n", a, b, c);//a�д����b��֮��c��С
	return 0;
}


//��ӡ1-100֮��3�ı���
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


//���Լ��
//������շת�����
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


//��ӡ����
//1���ܱ�4�������Ҳ��ܱ�100����������
//2���ܱ�400����������
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
//��������Ҳ��д��
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


//��ӡ����
//������ֻ�ܱ�1������������
//�������Գ���
//int main()
//{
//	//��ӡ100-200֮�������
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			//�ܱ�2--��i-1)֮�����������ֱ��break
//			if (i % j == 0)
//				break;
//		}
//		//break��j=i��������������������ж�
//		//���j==i,��ʾ�����жϲ�ִ�У���Ϊ����
//		if (j == i)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//�ô�������Ż������һ�����������������д��i=a*b,�����н����㣬a��b����һ��С�ڱض���ƽ��i
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
//�ô��뻹�����Ż���ż��һ��������������˿���ֱ������
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


//��дһ�����롣��һ��1-100֮�����е�����9����
// 9,19,29,39,49,59,69,79,89,99
// 90,91,92,93,94,95,96,97,98,99
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//if (i % 10 == 9 || i / 10 == 9)//����д���99����һ��������
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


//����1/1-1/2+1/3... -1/100
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

//����10�������е����ֵ
//int main()
//{
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr[] = { -1,-2,-3,-4,-5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	//int max = 0;//�����max��Ϊ0���������⣬��������Ԫ����[-1,-2,-3,-4,-5...]������0Сʱ����õ����
//				//����0����˰�max��Ϊarr[0]
//	int max = arr[0];
//	//�ӵڶ���Ԫ�ؿ�ʼ�Ƚ�
//	for (i = 1; i < sz; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("max = %d\n", max);
//	return 0;
//}


//����Ļ������˷��ھ���
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


//��������Ϸ
//1�����������
//2��������

//void menu()
//{
//	printf("**********************************\n");
//	printf("****    1��play    0��exit    ****\n");
//	printf("**********************************\n");
//}
//
//#include <time.h>
//void game()
//{
//	int guess;//���ܲµ�����
//	//printf("��ʼ��Ϸ\n");
//	//1������1-100֮��������
//	//int ret = rand()%100 + 1;
//	//printf("%d\n", ret);
//	while (1)
//	{
//		int ret = rand() % 100 + 1;
//		printf("������Ҫ�µ�����:>");
//		scanf("%d", &guess);
//		if (ret > guess)
//		{
//			printf("��С��\n");
//		}
//		else if (ret < guess)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	//����ʱ���
//	//time_t time(time_t *timer)
//	//srand(unsigned seed)
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("������ѡ��:>");
//			break;
//		}
//	} while (input);
//	return 0;
//}