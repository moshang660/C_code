#include <stdio.h>

int main() {
    int n;
    printf("%d\t%d\t%d\n", sizeof 1, sizeof(unsigned) - 1, sizeof n + 2); //������ʾ���Ϊ 4 3 6 ��Ϊ1���ֽھ���Ϊ4����-1���ֽ�Ҳ��4�ټ�ȥ-1������ʾΪ3�������n+2Ϊ6                                                                  
    printf("%d\t%d\t%d\n", sizeof + 1, sizeof(double) - 1, sizeof(n + 2));//������ʾ����� 4 7 4 ��Ϊ1���ֽ���4��double���ֽڳ���8 -1��7���ѣ�n+2��������֮��ʹ��Ϊһ��ֵ��������4��
    printf("%d\t%d\t%d\n", sizeof - 1, sizeof((double)-1), sizeof(n + 2.0));//���н���� 4 8 8 ��Ϊ1���ֽ���4����double-1��������֮�󣬾���double�����ֽ�Ϊ8��ͬ�����Ҳ��8
}