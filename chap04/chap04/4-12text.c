//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main(void)
//{
//	int no;
//
//	do {
//		printf("������һ����������");
//		scanf("%d", &no);
//		if (no <= 0)
//			puts("\a�벻Ҫ�������������");
//	} while (no <= 0);
//
//	/* no��0��ʱ */
//	int sum = no;
//	int num = 0;
//	while (no > 0) {
//		no /= 10;
//		num++;
//	}
//	printf("%d��λ����%d", sum, num);
//	puts("��");
//
//	return 0;
//}