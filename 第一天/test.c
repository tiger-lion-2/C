#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�����������������
//�޶�������ֵĿ����ԵĴ��뷶Χ����������ֵ�������


int main()
{
	//���������ʹ�ùؼ���extern,�����ⲿ���ŵ�
	extern int g_val;
	printf("%d\n", g_val);//����Ϊδ�����ı�ʶ����������
	return 0;
}


//ȫ�ֱ���������������������
//int main()
//{
//	{
//		//�ֲ��������������Ǳ������ڵľֲ���Χ
//		int num = 0;//num��������ֻ������������ڲ���Ч
//	}
//	printf("%d\n", num);
//	return 0;
//}


//int main()
//{
//	int num1 = 0; 
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);//����������������ڵ�ַΪnum1��num2�ĵط�
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}



//��ȫ�ֱ����;ֲ������ı�������ͬʱ���ֲ���������ʹ�ã����鲻Ҫ��ͬ
//int global = 2019; //ȫ�ֱ���
//
//int main()
//{
//	int local = 2018; // �ֲ�����
//	int global = 2020; //�ֲ�����
//	printf("global=%d\n", global);//2020
//	return 0;
//}


//int num2 = 20;  //ȫ�ֱ���--�����ڴ����({})֮��ı���
//int main()
//{
//	int num1 = 10; //�ֲ�����--�����ڴ����({})�ڵı���
//
//	return 0;
//}

//int main()
//{
//	//����-20
//	short age = 20; //���ڴ�����2���ֽ�=16bitλ���������20
//	float weight = 96.5; //���ڴ�����4���ֽڣ��������С��
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	return 0;
//}
//char--�ַ�����
//%d -- ��ӡ����
//%c -- ��ӡ�ַ�
//%f -- ��ӡ������--��ӡС��
//%p -- �Ե�ַ��ʽ��ӡ
//%x -- ��ӡʮ����������
//int main()
//{
//	//char ch = 'A';//���ڴ�����һ��ռ�����Ϊch
//	//printf("%c\n", ch);//��ʾ��ӡ�ַ���ʽ������
//	//short int
//	//int
//	//int age = 10;
//	//printf("%d\n", age); //��ӡ����ʮ���Ƹ�ʽ������
//	//long
//	/*long num = 100;
//	printf("%d\n", num);*/
//	double d = 3.14;
//	printf("%lf", d);
//	return 0;
//}

//int main() //������ -- ��������--���ҽ���һ��
//{
//	//printf--��ӡ����
//	//�⺯����c���Ա����ṩ������ʹ�õĺ���
//	//���к���#include <stdio.h>
//	printf("hehe\n");
//	return 0;
//}


//int �����͵���˼
//main����ǰ�ߵ�int��ʾmain�������ú󷵻�һ������ֵ
//int main()
//{
//
//	return 0; //����0
//}