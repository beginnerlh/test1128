#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void TuAn()//���ַ���
{
	for (int i = 1; i < 14; i++)//��һ��
	{
		for (int j = 1; i < 8 ? j <=((2 * i) - 1) : j<=(2 * (13 - i))+1;j++)
		{
			printf("%c ", '*');
		}
		printf("\n");
	}
	/*for (int j = 1; j < 14; j += 2)//�ڶ���
	{
		int a = j;
		while (a>0)
		{
			printf("%c ", '*');
			a--;
		}
		printf("\n");

	}
	for (int j = 11; j > 0; j -= 2)
	{
		int a = j;
		while (a > 0)
		{
			printf("%c ", '*');
			a--;
		}
		printf("\n");
	}*/
}
void shuixianhua()
{
	int a = 0;//��λ
	int b = 0;//ʮλ
	int c = 0;//��λ
	for (int i = 100; i < 1000; i++)
	{
		a = i % 10;
		b = i / 10 % 10;
		c = i / 100;
		if (i == a*a*a + b*b*b + c*c*c)
		{
			printf("%d\n", i);
		}
	}
}
void qiuhe()
{
	int a = 0;
	int sum = 0;
	printf("������һ������\n");
	scanf("%d", &a);
	int c = 1 + (int)log10(a);//�жϼ�λ��
	sum = pow(10000, c)*a + 
		pow(1000, c) * 2 * a +
		pow(100, c) * 3 * a +
		pow(10, c) * 4 * a + 
		5 * a;
	printf("%d", sum);
}
int main()
{
	//TuAn();
	//shuixianhua();
	qiuhe();
    system("pause");
    return 0;
}
