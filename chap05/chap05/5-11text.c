//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int main(void)
//{
//	//����ɼ�
//	double cost[6][2];
//	int i, j;
//	for (i = 0; i < 6; i++)
//	{
//		printf("�������%d��ͬѧ�����ĺ���ѧ�ɼ����ÿո��������", i + 1);
//		for (j = 0; j < 2; j++)
//		{	
//			scanf("%lf", &cost[i][j]);
//		}
//	}
//	//��ʾ���ſγ̵��ֺܷ�ƽ����
//	double Score1 = 0.0, Score2 = 0.0;
//	for (i = 0; i < 6; i++)
//	{
//		Score1 += cost[i][0];
//		Score2 += cost[i][1];
//	}
//	printf("�����ܷ�Ϊ%5.2f,ƽ����Ϊ%5.2f\n", Score1, Score1 / 6);
//	printf("��ѧ�ܷ�Ϊ%5.2f,ƽ����Ϊ%5.2f\n", Score2, Score2 / 6);
//	//����ѧ�����ֺܷ�ƽ����
//	double Score = 0.0;
//	for (i = 0; i < 6; i++)
//	{
//		for(j = 0; j < 2 ;j++)
//		{
//			Score += cost[i][j];
//		}
//		printf("��%d��ͬѧ���ܷ�Ϊ%5.2f,ƽ����Ϊ%5.2f\n", i + 1, Score, Score / 2);
//		Score = 0.0;
//	}
//
//	return 0;
//}