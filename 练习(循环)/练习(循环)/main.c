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
int main()
{
	int m, n;
	scanf("%d%d", &m, &n);
	int r;
	while (m%n)
	{
		r = m % n;
		m = n;
		n = r;
	}
	printf("%d\n", n);
	return 0;
}


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