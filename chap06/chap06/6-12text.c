////创建一个函数，将4行3列矩阵a和3行4列矩阵b的乘积，存储在4行4列的矩阵c中
//#include <stdio.h>
//
//void mat_mul(const int a[4][3], const int b[3][4], int c[4][4])
//{
//	int i, j, k;
//	for (i = 0; i < 4; i++)                     //4行
//	{
//		for (j = 0; j < 4; j++)                 //4列
//		{
//			c[i][j] = 0;                        //初始化
//			for (k = 0; k < 3; k++)             //3列
//			{
//				c[i][j] += a[i][k] * b[k][j];
//			}
//		}
//	}
//}
//
//int main(void)
//{
//	int a[4][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 }, { 10, 11, 12 } };
//	int b[3][4] = { { 13, 14, 15, 16 }, { 17, 18, 19, 20 }, { 21, 22, 23, 24 } };
//	int c[4][4];
//	mat_mul(a, b, c);
//	int i, j;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", c[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}