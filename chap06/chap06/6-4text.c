﻿//#define _CRT_SECURE_NO_WARNINGS
//
///*
//	计算两个整数的平方差
//*/
//
//#include <stdio.h>
//
///*--- 返回x的平方 ---*/
//int sqr(int x)
//{
//	return x * x;
//}
//
///*--- 返回x和y的差值 ---*/
//int diff(int a, int b)
//{
//	return (a > b) ? a - b : b - a;		/* 大值减小值 */
//}
//
////返回四次幂
//int pow4(int x)
//{
//	return sqr(x) * sqr(x);
//}
//
//int main(void)
//{
//	int x, y;
//
//	puts("请输入两个整数。");
//	printf("整数x：");   scanf("%d", &x);
//	printf("整数y：");   scanf("%d", &y);
//
//	printf("x和y的平方差是%d。\n", diff(sqr(x), sqr(y)));
//	printf("x的四次幂是%d。\n", pow4(x));
//
//	return 0;
//}
