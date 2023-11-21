//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main(void)
//{
//	int a, b;
//	puts("请输入两个整数。");
//	printf("整数a：");
//	scanf("%d", &a);
//	printf("整数b：");
//	scanf("%d", &b);
//
//	int n1, n2;
//	if (a <= b)
//	{
//		n1 = a;
//		n2 = b;
//	}
//	else
//	{
//		n1 = b;
//		n2 = a;
//	}
//
//	int num = 0, i;
//	for (i = n1; i <= n2; i++)
//		num += i;
//
//	printf("大于等于%d小于等于%d的所有整数的和是%d。\n", a, b, num);
//
//	return 0;
//}