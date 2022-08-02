#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

struct Book
{
	char name[20];  //数组名本质上是地址
	short price;    //变量名可以直接修改值
};

int main()
{
	struct Book b1 = { "c语言程序设计", 55 };
	b1.price = 15;
	b1.name = "c++";
	printf("%d\n", b1.price);

	strcpy(b1.name, "C++");// string copy -- 字符串拷贝 -- 库函数
	printf("%s\n", b1.name);
	//struct Book* pb = &b1;
	//.    结构体变量 - 成员
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);

	//-> 结构体指针 - 成员
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
	int* p = &a;//取地址,变量如果用来存放地址，就把这个变量叫做指针变量
	printf("%p\n", p);
	*p = 20;// * -- 解引用操作符/简介访问操作符
	printf("%d\n", a);
	return 0;
}