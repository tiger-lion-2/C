#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	int sz = 0;
//	int arr[10] = { 0 }; //���10������Ԫ�ص�����
//	//10 * sizeof(int) 
//	printf("%d\n", sizeof(arr));
//	//��������Ԫ�ظ���
//	// ���� = �ܴ�С/ÿ��Ԫ�ش�С
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz=%d\n", sz);
//	//int a = 10;
//	//sizeof������Ǳ���/������ռ�ռ�Ĵ�С����λ���ֽ�
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof(int));//4
//	//printf("%d\n", sizeof a);//4
//	//��sizeof���������С��ʱ�����ǿ��԰���������ȡ�������Ǽ������ʹ�С��ʱ�򣬲���ʡȥ����
//	return 0;
//}

//int main()
//{
//	//&��λ��
//	//|��λ��
//	//^��λ���
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
//	//��λ���������Ƶ���2����λ
//	int a = 20;
//	//a �����ͣ�ռ4���ֽڣ���32λ
//	//00000000000000000000000000000101
//	//a << 3;
//	int b = a << 3;
//	int c = a >> 3;
//	//>>����
//	//<<����
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	/*int a = 1;
//	int b = 2;
//	int c = 3;*/
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//����һ�����10���������ֵ�����
//	//printf("%d\n", arr[4]); //���±����Ԫ��
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
//	printf("�������\n");
//	while (line < 1000)
//	{
//		printf("�ô���\n");
//		line++;
//
//	}
//	printf("��offer\n");
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("����Ҫ�ú�ѧϰ��(1/0):>");
//	scanf_s("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//	return 0;
//}
//

//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c")); //13
//	//\32,32����2��8��������   \ddd����1-3��8��������  \xdd����2��16���Ƶ�����
//	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
//	//32 --> 10���ƣ�26 --> ��
//	return 0;
//}


//int main()
//{
//	//printf("c:\test\32\test.c");\t��ˮƽ�Ʊ��
//	printf("c:\\test\\32\\test.c");
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", strlen(arr1)); //3���ڼ����ַ�������ʱ��'\0'�ǽ�����־�������Ǽ�������
//	printf("%d\n", strlen(arr2)); //���ֵ
//	return 0;
//}




//int main()
//{
//	char arr1[] = "abc"; //����
//	//�����ڼ�����ϴ洢��ʱ�����Զ�������ʽ�洢�ġ�
//	// a - 97
//	// A - 65
//	// 
//	// ASCII����
//	//abc���� -- 'a', 'b', 'c','\0','\0'��ֵ��0,��˼���ַ����Ľ�����־
//	char arr2[] = { 'a', 'b', 'c', 0};// ����ĩβ���0�൱�ڼ���'\0'
//	printf("%s\n", arr1);
//	printf("%s\n", arr2); 
//	return 0;
//}


//����
//1�����泣��
//2��const���εĳ�����
//3��#define����ı�ʶ������
//4��ö�ٳ���

//ö��--һһ�о�
//�Ա��У�Ů������
// ��ԭɫ���죬�̣���
// ���ڣ�1 2 3 4 5 6 7 
//
//ö�ٹؼ��� -- enum
// 

enum Color
{
	RED,
	YELLOW,
	BLUE
};

int main()
{
	//ö�����ʹ����ı����ǿ��Ըı�ģ�����ö�ٳ����ǲ��ܸı��
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

////MALE,FEMALE, SECRET --- ö�ٳ�������ö�����Ϳ��ܵ�ȡֵ

//int main()
//{
//	/*enum Sex s = MALE;*/
//	printf("%d\n", MALE); //0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}



//#define ����ı�ʶ������
//#define MAX 10
//int main()
//{
//	int array[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}

//int main()
//{
//	//const int n = 10;//n�Ǳ������������г����ԣ�������������Ϊ���ܱ�ı���
//	//int array[10] = { 0 };
//	//const���εĳ����������ɱ��ı�
//	/*const int num = 4;
//	printf("%d\n", num);*/
//	/*num = 8;
//	printf("%d\n", num);*/
//	//3;//���泣��
//	return 0;
//}
