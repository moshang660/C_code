//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main(void)
//{
//	int i, j, len;
//
//	puts("����ֱ�������Ϸ��ĵ���ֱ�������Ρ�");
//	printf("�̱ߣ�");
//	scanf("%d", &len);
//
//	for (i = len; i >= 0; i--) {        /* i ��(i = 1, 2, --- , len) */
//		for (j = 1; j <= len - i; j++)    /* ÿ����ʾlen-i ��' ' */
//			putchar(' ');
//		for (j = 1; j <= i; j++)        /* ÿ����ʾi ��'*' */
//			putchar('*');
//		putchar('\n');                    /* ���� */
//	}
//
//	return 0;
//}