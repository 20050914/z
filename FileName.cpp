#define _CRT_SECURE_NO_WARNINGS 1
//期中考试开始了，大家都想取得好成绩，争夺前五名。从键盘输入 n 个学生成绩，输出每组排在前五高的成绩。
//两行，第一行输入一个整数，表示n个学生（ >= 5），第二行输入n个学生成绩（整数表示，范围0~100），用空格分隔。
#include <stdio.h>

int main()
{
    int n = 0, arr[50] = { 0 };
    scanf("%d\n", &n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = 0, j = 0, m[50] = { 0 };
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                max = arr[i];          //将arr[i]与arr[j]的数进行交换
                arr[i] = arr[j];
                arr[j] = max;
            }

        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}