//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//#define NUMBER 7      //定义数组长度
//
//int search_idx(const int v[], int idx[], int key, int n)
//{
//	int i, j = 0;
//	for (i = 0; i < NUMBER; i++)
//	{
//		if (v[i] == key)    //查找
//		{
//			idx[j] = i;     //记录索引
//			++j, ++n;       //记录个数
//		}
//	}
//	return n;
//}
//
//int main(void)
//{
//	int v[] = { 1,7,5,7,2,4,7 };
//	int idx[NUMBER];
//	int key = 0, n = 0;
//	printf("请输入你要查询的数字：");
//	scanf("%d", &key);
//	int num = search_idx(v, idx, key, n);
//	//输出个数
//	printf("%d\n", num);
//	//输出索引
//	int i;
//	for (i = 0; i < num; i++)
//	{
//		printf("%d ", idx[i]);
//	}
//	putchar('\n');
//	return 0;
//}