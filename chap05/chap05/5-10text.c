//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//
//int main(void)
//{
//    int a[4][3];
//    int b[3][4];
//    int i, j, k, x, y, c[4][4];
//    printf("����4*3 ���� �Կո������\n");
//    for (i = 0; i < 4; i++)
//        for (k = 0; k < 3; k++)
//            scanf("%d", &a[i][k]);
//    printf("����3*4 ���� �Կո������\n");
//    for (i = 0; i < 3; i++)
//        for (k = 0; k < 4; k++)
//            scanf("%d", &b[i][k]);
//    for (i = 0; i < 4; i++) {    //�������c��ֵ 
//        for (j = 0; j < 4; j++) {
//            c[i][j] = 0;
//            for (k = 0; k < 3; k++) {
//                c[i][j] += a[i][k] * b[k][j];
//            }
//
//        }
//    }
//
//    for (x = 0; x < 4; x++)
//    {
//        for (y = 0; y < 4; y++)
//            printf("%d\t", c[x][y]);
//        printf("\n");
//    }
//    return 0;
//}