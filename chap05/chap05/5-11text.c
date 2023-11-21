//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int main(void)
//{
//	//输入成绩
//	double cost[6][2];
//	int i, j;
//	for (i = 0; i < 6; i++)
//	{
//		printf("请输入第%d个同学的语文和数学成绩（用空格隔开）：", i + 1);
//		for (j = 0; j < 2; j++)
//		{	
//			scanf("%lf", &cost[i][j]);
//		}
//	}
//	//显示各门课程的总分和平均分
//	double Score1 = 0.0, Score2 = 0.0;
//	for (i = 0; i < 6; i++)
//	{
//		Score1 += cost[i][0];
//		Score2 += cost[i][1];
//	}
//	printf("语文总分为%5.2f,平均分为%5.2f\n", Score1, Score1 / 6);
//	printf("数学总分为%5.2f,平均分为%5.2f\n", Score2, Score2 / 6);
//	//各个学生的总分和平均分
//	double Score = 0.0;
//	for (i = 0; i < 6; i++)
//	{
//		for(j = 0; j < 2 ;j++)
//		{
//			Score += cost[i][j];
//		}
//		printf("第%d个同学的总分为%5.2f,平均分为%5.2f\n", i + 1, Score, Score / 2);
//		Score = 0.0;
//	}
//
//	return 0;
//}