//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main(void)
//{
//	int n;
//	puts("让我们来画一个金字塔。");
//	printf("金字塔有几层：");
//	scanf("%d", &n);
//
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 0; j < n - i; j++)
//			putchar(' ');
//		for (j = 0; j < (i - 1) * 2 + 1; j++)
//			putchar('*');
//		putchar('\n');
//	}
//
//	return 0;
//}