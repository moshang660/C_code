//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//
//#define NUMBER 80
//
///*找到px数组中的最大值，也就是在某一分数段出现的最大次数，在此题中为3，所以看到
//3就打一个星号，没看到就打空格，在第一行完成后，将最大值减一，就可以继续完成后面
//的算法，从每一行的角度来看非常方便理解。*/
//
//int main()
//{
//	int num = 0;                            //学生人数
//	int arr[NUMBER] = { 0 };                //学生成绩
//	int i = 0;
//	int px[11] = { 0 };                     //分布数量
//	char a = '*';
//	char b = ' ';
//
//	printf("请输入学生人数：");
//	do
//	{
//		scanf("%d", &num);
//		if (num < 0 || num>80)
//		{
//			printf("请输入1~%d的数：", NUMBER);
//
//		}
//	} while (num < 0 || num>80);
//	printf("请输入%d人的分数。\n", num);
//	for (i = 0; i < num; i++)
//	{
//		printf("%2d号：", i + 1);
//		do
//		{
//			scanf("%d", &arr[i]);
//			if (arr[i] < 0 || arr[i]>100)
//			{
//				printf("请输入1~100之间的整数：");
//			}
//		} while (arr[i] < 0 || arr[i]>100);
//		px[arr[i] / 10]++;
//	}
//	puts("---分布图---");
//	/*int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%3d-%3d:", i * 10 , (i * 10 + 9));
//		for (j = 0; j < px[i]; j++)
//		{
//			putchar('*');
//
//		}putchar('\n');
//	}
//	printf("    100:");
//	for (j = 0; j < px[10]; j++)
//	{
//		putchar('*');
//	}*/
//	int max = 0;
//	for (i = 0; i < 11; i++)
//	{
//
//		if (px[i] > max)
//		{
//			max = px[i];
//		}
//	}
//
//	do
//	{
//		for (i = 1; i <= 11; i++)
//		{
//
//			if (px[i - 1] == max)
//			{
//				printf("%4c", a);
//				px[i - 1]--;
//			}
//			else
//				printf("%4c", b);
//		}
//		putchar('\n');
//		max--;
//	} while (max > 0);
//
//	puts("----------------------------------------------");
//	for (i = 0; i < 101; i += 10)
//	{
//		printf("%4d", i);
//	}
//
//	return 0;
//}