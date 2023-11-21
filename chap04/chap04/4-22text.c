//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main(void)
//{
//	int i, j;
//	int x, y, height, width;
//
//	puts("让我们来画一个长方形。");
//	printf("一边：");   scanf("%d", &x);
//	printf("另一边：");   scanf("%d", &y);
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
//	for (i = 1; i <= height; i++) {			/* 长方形有height行 */
//		for (j = 1; j <= width; j++)		/* 显示width 个'*'* */
//			putchar('*');
//		putchar('\n');						/* 换行 */
//	}
//
//	return 0;
//}