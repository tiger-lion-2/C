#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>  //�ṩstrcmp����  
#include <stdlib.h> //�ṩsystem����

//c������һ�� �ṹ�� �ĳ����������
//���ṹ������1��˳��ṹ 2��ѡ��ṹ 3��ѭ���ṹ


//shutdown      -s          -t          60
//         ���ùػ�     ����ʱ��ػ�      60s֮��ػ�
//shutdown      -a
//           ȡ���ػ�

//int main()
//{
//	char arr[20];
//	system("shutdown -s -t 60");
//error:
//	printf("��ע�⣺��ĵ��Ի���һ����֮��ػ���������룺��������ȡ���ػ�\n������:>");
//	scanf("%s", arr);
//	if (strcmp(arr, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto error;
//	}
//	return 0;
//}


//Ҳ����ʹ��ѭ��ʵ��
int main()
{
	char arr[20];
	system("shutdown -s -t 60");
	while (1)
	{
		printf("��ע�⣺��ĵ��Ի���һ����֮��ػ���������룺��������ȡ���ػ�\n������:>");
		scanf("%s", arr);
		if (strcmp(arr, "������") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}

//goto���,������ʹ��
//goto���ʹ�ó���
//for (...)
//{
//	for (...)
//	{
//		for (...)
//		{
//			if (disaster)
//				goto error;//error�Ǹ���ǩ
//		}
//	}
//}
//
//error:
//	if(disaster)
//		//����������




//forѭ��

//forѭ���ı���
// 
//һ��������
//int main()
//{
//	int i = 0;
//	int k = 0;
//	//ѭ��0�Σ���0��ֵΪk��Ϊ�٣�������ѭ����
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			//�����ڲ�ѭ����jδ����ʼ����һֱ��10������ִ��10��
//			printf("haha\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			//ִ��10*10=100��
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	//forѭ���ĳ�ʼ�����жϣ�����������ʡ�ԣ�����forѭ�����ж�ʡ�ԣ��ж������ͱ�ʾ��Ϊ��
//	for (;;)
//	{
//		printf("haha\n");//��ѭ��
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//��Ҫ��forѭ���ڲ��޸ı�������ʧȥ����
//		if (i = 5)
//			printf("haha\n");
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//       ��ʼ�����ж���������������
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	char ch = getchar();
//	putchar(ch);
//	return 0;
//}

//int main()
//{
//	/*int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}*/
//	int ch;
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);//scanfֻ��ȡ�ո�ǰ�ģ���������Ϊ123456 ABCD�ͻᱨ��
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ������(Y/N):>");
//	//��������ʣһ��'\n'
//	//��Ҫ��ȡ'\n'
//	//getchar();
//	int ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("����ȷ��");
//	}
//	return 0;
//}


//while���
//int main()
//{
//	int i = 1;
//
//	while (i <= 10)
//	{
//		if (i == 5)
//			//continue��������ֹ����ѭ���ģ�Ҳ���Ǳ���continue��ߵĴ��벻��ִ�У�����ֱ����ת��while�����жϲ��֣�
//			//������һ��ѭ�����ж�
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//
//	/*while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}*/
//
//	//while (i <= 10)
//	//{	
//	//	//��ӡ1-10����
//	//	printf("%d ", i);
//	//	i++;
//	//}
//	return 0;
//}



//switch���,����ʵ�ֶ��֧���
//int main()
//{
//	int day;
//	scanf("%d", &day);//switch���ʽ���������ͱ��ʽ
//	switch (day)
//	{
//	case 1:
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
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}



//�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("%d������\n", num);
//	return 0;
//}


//�ж�1-100֮�������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			count++;
//			printf("%d\n", i);
//		}	
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	while (i < 100) {
//		printf("%d ", i);
//		i += 2;
//	}
//	return 0;
//}


//��֧���Ҳ��ѡ�����
//int main()
//{
//	//�����֧���ֻ�ᱻִ�����е�һ��
//
//	//����֧��䣺if(���ʽ) ���;
//	//˫��֧���: if(���ʽ) ���1;else ���2��
//	//���֧��䣺if(���ʽ) ���1��elif(���ʽ�����2��else ���3;
//	int age = 30;
//	//����֧
//	//if (age < 18)
//	//	printf("δ����\n");
//
//	//˫��֧
//	//if (age < 18)
//	//	printf("δ����\n");
//	//else
//	//	printf("����\n");
//
//	//���֧
//	if (age < 18)
//		printf("δ����\n");
//	else if (age < 28)
//		printf("����\n");
//	else if (age < 50)
//		printf("׳��\n");
//	else if (age < 90)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
//
//
//	//���������Ƚϴ�С
//	/*int num = 20;*/
//	//if (18 <= num < 30)//���Ȼ��ж�18�Ƿ�С�ڵ���40��Ϊ�棬Ȼ���ж�1С�ڵ���30��Ϊ�棬�����������ʽΪ�棬�����Ա��Ǵ����
//	//	printf("hehe");
//
//	//if (18 <= num && num < 30)//�����Աȼ�����ȷ��
//	//	printf("hehe\n");
//	return  0;
//}

//c��������;��β�Ĵ���һ�����
//int main()
//{
//	int a = 10;
//	;//�����
//	return 0;
//}