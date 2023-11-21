//#include <stdio.h>
//
//void rev_intary(int v[], int n)
//{
//	int i;
//	for (i = 0; i < n / 2 - 1; i++) {    /* 对数组元素进行倒序排列 */
//		int temp = v[i];
//		v[i] = v[n - 1 - i];
//		v[n - 1 - i] = temp;
//	}
//}
//
//int main(void)
//{
//	int v[] = { 1,2,3,4,5,6,7,8,9 };
//	rev_intary(v, 9);
//	int i;
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", v[i]);
//	}
//
//	return 0;
//}