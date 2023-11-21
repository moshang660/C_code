//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//#define NUMBER 10
//
//int main(void)
//{
//	int arr[NUMBER];
//	int i, num;
//	
//	printf("数据个数：");
//	do
//	{
//		scanf("%d", &num);
//		if (num < 1 || num > NUMBER)
//			printf("请输入1-%d的数：", NUMBER);
//	} while (num < 1 || num > NUMBER);
//
//	for (i = 0; i < num; i++)
//	{
//		printf("%d号：", i + 1);
//		scanf("%d", &arr[i]);
//	}
//
//	putchar('{');
//	for (i = 0; i < num; i++)
//	{
//		printf("%d", arr[i]);
//		if (i < num - 1)
//			putchar(',');
//	}
//	putchar('}');
//	putchar('\n');
//
//	return 0;
//}