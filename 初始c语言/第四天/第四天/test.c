#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

struct Book
{
	char name[20];  //�������������ǵ�ַ
	short price;    //����������ֱ���޸�ֵ
};

int main()
{
	struct Book b1 = { "c���Գ������", 55 };
	b1.price = 15;
	b1.name = "c++";
	printf("%d\n", b1.price);

	strcpy(b1.name, "C++");// string copy -- �ַ������� -- �⺯��
	printf("%s\n", b1.name);
	//struct Book* pb = &b1;
	//.    �ṹ����� - ��Ա
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);

	//-> �ṹ��ָ�� - ��Ա
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);

	return 0;
}


int main()
{
	char ch = 'w';
	char* pc = &ch;
	*pc = 'a';
	printf("%c\n", ch);
	printf("%d\n", sizeof(pc));
	return 0;
}


int main()
{
	int a = 10;
	int* p = &a;//ȡ��ַ,�������������ŵ�ַ���Ͱ������������ָ�����
	printf("%p\n", p);
	*p = 20;// * -- �����ò�����/�����ʲ�����
	printf("%d\n", a);
	return 0;
}