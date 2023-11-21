#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void)
{
	int n;
	printf("请输入您的身高：");
	scanf("%d", &n);
	printf("您的标准体重是%.1f公斤。\n", (n - 100) * 0.9);

	return 0;
}