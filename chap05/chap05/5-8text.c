//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//#define NUMBER	80		/* 人数上限 */
//
//int main(void)
//{
//	int i, j;
//	int num;				/* 实际的人数 */
//	int tensu[NUMBER];		/* 学生的分数 */
//	int bunpu[11] = { 0 };	/* 分布图 */
//
//	printf("请输入学生人数：");
//
//	do {
//		scanf("%d", &num);
//		if (num < 1 || num > NUMBER)
//			printf("\a 请输入1~%d 的数：", NUMBER);
//	} while (num < 1 || num > NUMBER);
//
//	printf("请输入%d 人的分数。\n", num);
//
//	for (i = 0; i < num; i++) {
//		printf("%2d号：", i + 1);
//		do {
//			scanf("%d", &tensu[i]);
//			if (tensu[i] < 0 || tensu[i] > 100)
//				printf("\a请输入1~100 的数：");
//		} while (tensu[i] < 0 || tensu[i] > 100);
//		bunpu[tensu[i] / 10]++;
//	}
//
//	puts("\n---分布图---");
//
//	for (i = 0; i <= 9; i++) {				/* 不到100分 */
//		printf("%3d - %3d：", i * 10, i * 10 + 9);
//		for (j = 0; j < bunpu[i]; j++)
//			putchar('*');
//		putchar('\n');
//	}
//
//	printf("      100：");
//
//	for (j = 0; j < bunpu[10]; j++)			/* 100分 */
//		putchar('*');
//	putchar('\n');
//
//	return 0;
//}