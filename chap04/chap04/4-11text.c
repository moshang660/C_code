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
//	printf("%d������ʾ�Ľ����", no);
//	while (no > 0) {
//		printf("%d", no % 10);		/* ��ʾ���һλ�� */
//		no /= 10;					/* ����һλ */
//	}
//	puts("��");
//
//	return 0;
//}