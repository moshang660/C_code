//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main(void)
//{
//	int i, j;
//	int x, y, height, width;
//
//	puts("����������һ�������Ρ�");
//	printf("һ�ߣ�");   scanf("%d", &x);
//	printf("��һ�ߣ�");   scanf("%d", &y);
//
//	if (x > y)
//	{
//		width = x;
//		height = y;
//	}
//	else
//	{
//		width = y;
//		height = x;
//	}
//
//	for (i = 1; i <= height; i++) {			/* ��������height�� */
//		for (j = 1; j <= width; j++)		/* ��ʾwidth ��'*'* */
//			putchar('*');
//		putchar('\n');						/* ���� */
//	}
//
//	return 0;
//}