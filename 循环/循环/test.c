#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>//Sleep�ǿ⺯��
#include <stdlib.h>//systemҲ�ǿ⺯��
#include <math.h>


//��������Ϸ
void menu()
{
	printf("****************************");
	printf("****  1 play    0 exit  ****");
	printf("****************************");
}


int main()
{
	int guess = 0;
	menu();
	printf("��ѡ��:>");
	scanf("%d", &guess);
	do {
		switch (guess)
		{
		case 1:
			//game();
			break;
		case 0:
			break;
		default:
			break;
		}
		return 0;
	} while ();
	
}



//int main()
//{
//	char arr[20] = { 0 };
//	//system(),ִ��ϵͳ����
//	system("shutdown /s /t 60");
//again:
//	printf("��ע�⣬���ĵ�����һ�����ڹػ���������룺��������ȡ���ػ�\n������:>");
//	scanf("%s", arr);
//	if (strcmp(arr, "������") == 0)
//	{
//		system("shutdown /a");
//	}
//	else {
//		goto again;
//	}
//	return 0;
//}


//��Ļ�ϴ�ӡ����žų˷��ھ���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i,j,i*j);//%��d֮���������2�����������λ���ÿո��룬��-�������
//		}
//		printf("\n");
//	}
//	return 0;
//}



//��ʮ���������ֵ
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 1; i <= sz; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max=%d\n", max);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag *(1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count=%d", count);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int count = 0;
//	//for (i = 100; i <= 200; i++)
//	for(i=101;i<=200;i+=2)
//	{
//		//�ж�i�Ƿ�Ϊ�������ܹ���1��������������
//		//�����жϹ���
//		//1���Գ���������2 -- i-1�����֣�
//		int j = 0;
//		//for (j = 2; j < i; j++)
//		for (j=2;j<sqrt(i);j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		//if (j == i)
//		if(j>sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}


//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�����
//		//1���ܱ�4�����Ҳ��ܱ�100����
//		//2���ܱ�400����
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}*/
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


//շת������������Լ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int r = 0;
//	printf("������������:>");
//	scanf("%d%d", &a, &b);
//	while (a % b)
//	{
//		r = a % b;
//		a = b;
//		b = r;
//	}
//	printf("%d", b);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("������������:>");
//	scanf("%d%d%d", &a,&b,&c);
//	int tmp = 0;
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("�Ӵ�С���Ϊ%d,%d,%d:>", a, b, c);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//strcmp���ڱȽ������ַ�����С����������ַ�����ȣ�����0��
//			//�����һ��С�ڵڶ��������ظ����������򷵻�����
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("�����������Σ����������\n");
//	}
//	return 0;
//}



//int main()
//{
//	//��д���룬��ʾ����ַ��������ƶ������м���
//	//welcome to bit!!!!!!
//	//####################
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	int right = strlen(arr1) - 1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//��λ��ms,1000ms����1s
//		//system("cls");//ִ��ϵͳ�����һ������
//		left++;
//		right--;
//		
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//���ַ�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
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
//		printf("�Ҳ�����");
//
//	return 0;
//}

//����1��+2!+3!+....+10!
//int main()
//{
//	int i = 1;
//	int result = 0;
//	int n = 0;
//	
//	//printf("����������:");
//	//scanf_s("%d", &n);
//	for (n = 1; n <= 3; n++)
//	{
//		int mul = 1;
//		for (i; i <= n; i++)
//		{
//			mul *= i;
//			//1*1
//			//1*2
//			//1*2*3
//		}
//		//n�Ľ׳�
//		result += mul;
//	}
//	printf("result=%d\n", result);
//	return 0;
//}


////����n�Ľ׳�
//int main()
//{
//	int i = 0;
//	int mul = 1;
//	int n = 0;
//	printf("���������֣�");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//		mul *= i;
//	printf("%d�Ľ׳���%d\n", n, mul);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int k = 0;
//	for (a = 0, k = 0; k = 0; a++, k++)//���ʽ2�����ж���䣬Ϊ��ֵ��䣬��0��ֵ��k��Ϊ�٣����Բ�ִ��ѭ��
//		k++;
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	printf("��������������");
//	scanf("%d%d", &a, &b);
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	printf("max=%d\n", max);
//	return 0;
//}
//int main()
//{
//	//����ʡ�ԣ�����Ҫ���ʡ��
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	for (a=1; a <= 10; a++)//���ʽ1Ϊ��ʼ�����֣����ʽ2Ϊ�жϲ��֣����ʽ3Ϊ��������
//		printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	for (i; i <= 10; i++)
//		if (i % 2 == 0)
//			printf("%d\n", i);
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[10] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);//�������룬�������password��
//	//��ʱ���뻺������ʣһ����\n��
//	//getchar();//�������12345 ABCD����������
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("ȷ�ϳɹ�");
//	else
//		printf("ȷ��ʧ��");
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//EOF-- end of file ���ļ�������־�� ֵΪ-1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	/*ch = getchar();
//	putchar(ch);
//	printf("%c\n", ch);*/
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	while (i <= 9)
//	{
//		i++;
//		printf("%d\n", i);
//	}
//	return 0;
//


//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	//switch���һ�������֧����
//	//switch����в������continue���
//	switch (day)//������ı��ʽ�����ͱ��ʽ
//	{
//	case 1://case��������ͳ������ʽ
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("����·�߲�ͨ\n");
//	}

	//if-else���˫��֧����
	/*if (1 == day)
		printf("����һ");
	else if (2 == day)
		printf("���ڶ�");
	else if (3 == day)
		printf("������");*/
	 


	//return 0;
//}

//int main()
//{
//	int i = 1;
//	while(i<=100)
//	{
//		if (i%2 != 0)
//			printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 4;
//	if (5 == a) //�����ͳ����ȴ�Сʱ����������ǰ������������Ⱥ�д��һ���ȺŲ���bug
//	{
//		printf("����\n");
//	}
//	//if(a = 5) //��ֵ������
//	//{
//	//	printf("�Ǻ�\n");
//	//}
//	return 0;
//}



//����else��else������������Ǹ�δƥ���if���
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}


//int main()
//{
//	//if-else���Ҫ�ǿ��ƶ�����䣬���ô�����������
//
//	int age = 20;
//	if (age < 18)
//		printf("δ����\n");
//	else
//	{
//		if (age >= 18 && age < 28)
//		printf("����\n");
//		else if (age >= 28 && age < 50)
//		printf("����\n");
//		else if (age >= 50 && age < 90)
//		printf("����\n");
//		else
//		printf("�ϲ���\n");
//
//	}
//	/*else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("����\n");
//	else if (age >= 50 && age < 90)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");*/
//
//	return 0;
//}