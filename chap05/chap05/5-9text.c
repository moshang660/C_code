//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//
//#define NUMBER 80
//
///*�ҵ�px�����е����ֵ��Ҳ������ĳһ�����γ��ֵ����������ڴ�����Ϊ3�����Կ���
//3�ʹ�һ���Ǻţ�û�����ʹ�ո��ڵ�һ����ɺ󣬽����ֵ��һ���Ϳ��Լ�����ɺ���
//���㷨����ÿһ�еĽǶ������ǳ�������⡣*/
//
//int main()
//{
//	int num = 0;                            //ѧ������
//	int arr[NUMBER] = { 0 };                //ѧ���ɼ�
//	int i = 0;
//	int px[11] = { 0 };                     //�ֲ�����
//	char a = '*';
//	char b = ' ';
//
//	printf("������ѧ��������");
//	do
//	{
//		scanf("%d", &num);
//		if (num < 0 || num>80)
//		{
//			printf("������1~%d������", NUMBER);
//
//		}
//	} while (num < 0 || num>80);
//	printf("������%d�˵ķ�����\n", num);
//	for (i = 0; i < num; i++)
//	{
//		printf("%2d�ţ�", i + 1);
//		do
//		{
//			scanf("%d", &arr[i]);
//			if (arr[i] < 0 || arr[i]>100)
//			{
//				printf("������1~100֮���������");
//			}
//		} while (arr[i] < 0 || arr[i]>100);
//		px[arr[i] / 10]++;
//	}
//	puts("---�ֲ�ͼ---");
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