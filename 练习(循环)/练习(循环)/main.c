#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

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

int main()
{
	char arr1[] = "Welcome to here!!!!!\n";
	char arr2[] = "###################!\n";

	int left = 0;
	//int right = strlen(arr1);
	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//���ַ�������Ԫ�ظ���ʱ��'\0'Ҳ�ᱻ�㣬�����㳤��ʱ�����ᱻ��

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s", arr2);
		Sleep(1000);//1000ms
		system("cls");//����
		left++;
		right--;
	}
	printf("%s", arr2);
	return 0;
}