#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//#define ���峣��
#define MAX 100;
//define�����
#define MAX(X,Y) (X>Y?X:Y)

//����
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	//int a = MAX;
	int x = 10;
	int y = 20;
	//����
	int max = Max(x, y);
	printf("max=%d\n", max);
	//��
	max = MAX(x, y);
	//max = (x>y?x:y)
	printf("max=%d\n", max);
	return 0;
}



//static���ξֲ�����
//�ֲ��������������ڱ䳤
//static����ȫ�ֱ���
//�ı��˱������������þ�̬��ȫ�ֱ���ֻ�����Լ���Դ�ļ��ڲ�ʹ��,
//����Դ�ļ���û��ʹ����

//static���κ����ı��˺�������������
//�ⲿ�������� -- �ڲ���������

//�����ⲿ����
//extern int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	//extern - �����ⲿ����
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}


//void test()
//{
//	//int a = 1; //���5��2
//	static int a = 1;
//	a++;
//	printf("a=%d\n", a);//2,3,4,5,6
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	//typedef -- ���Ͷ��� -- �����ض���
//	typedef unsigned int u_int;//u_int�Ǳ���
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;
//}
//int main()
//{
//	register int a = 10;//�����a����ɼĴ�������
//	return 0;
//}

//int main()
//{
//	int a = 30;
//	int b = 20;
//	int max = 0;
//	max = a > b ? a: b;//���������
//	printf("max=%d\n", max);
//	return 0;
//}

//int main()
//{
//	//ǿ������ת����������ʹ��
//	int a = (int)3.14;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;// a++�к���++����ʹ�ã���++
//	int c = ++a;//++a��ǰ��++����++����ʹ��
//	printf("a=%d b=%d\n", a, b);
//	printf("a=%d c=%d\n", a, c);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = ~a;//�з��ŵ����ͣ����λ��1��ʾ������Ϊ0���ʾ����
//	//~��������λȡ��
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//ԭ�롢���롢����
//	// ԭ�����λ���䣬����λȡ���õ����룬����+1�õ�����
//	
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//
//	//11111111111111111111111111111111 -- ����
//	//11111111111111111111111111111110 -- ����
//	//10000000000000000000000000000001 -- ԭ��
//
//
//	printf("%d\n", b);//-1����ӡ�����������ԭ��
//	return 0;
//}
//
//
//
//int main()
//{
//	int a = 3;
//	//00000000000000000000000000000011
//	
//	int b = ~a;
//	//11111111111111111111111111111100
//	
//
//	//11111111111111111111111111111100 - ����
//	//11111111111111111111111111111011 - ����
//	//10000000000000000000000000000100 - ԭ��
//
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = -4;
//	//10000000000000000000000000000100 -- ԭ��
//	int b = ~a;
//	//01111111111111111111111111111011
//
//	//01111111111111111111111111111011 -- ����
//	//01111111111111111111111111111010 -- ����
//	//00000000000000000000000000000101 -- ԭ��
//	printf("%d\n", b);
//	return 0;
//}

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int max = 0;
//	max = Max(3, 4);
//	printf("max=%d\n", max);
//	return 0;
//}
// 

//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("%d\n", num1);
//	else
//		printf("%d\n", num2);
//
//	return 0;
//}

//int main()
//{
//	//�ַ���������־��'\0'
//	//'\0' -- ת���ַ� -- 0
//	//0 -- ����
//	//'0' -- �ַ� -- 48
//	char arr[10] = "hello bit";
//	printf("%d\n", strlen(arr));
//	return 0;
//}