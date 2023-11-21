//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main(void)
//{
//	int no;
//
//	do {
//		printf("请输入一个正整数：");
//		scanf("%d", &no);
//		if (no <= 0)
//			puts("\a请不要输入非正整数。");
//	} while (no <= 0);
//
//	/* no比0大时 */
//	int sum = no;
//	int num = 0;
//	while (no > 0) {
//		no /= 10;
//		num++;
//	}
//	printf("%d的位数是%d", sum, num);
//	puts("。");
//
//	return 0;
//}