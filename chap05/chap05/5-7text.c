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
//	printf("���ݸ�����");
//	do
//	{
//		scanf("%d", &num);
//		if (num < 1 || num > NUMBER)
//			printf("������1-%d������", NUMBER);
//	} while (num < 1 || num > NUMBER);
//
//	for (i = 0; i < num; i++)
//	{
//		printf("%d�ţ�", i + 1);
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