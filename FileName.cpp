#define _CRT_SECURE_NO_WARNINGS 1
//���п��Կ�ʼ�ˣ���Ҷ���ȡ�úóɼ�������ǰ�������Ӽ������� n ��ѧ���ɼ������ÿ������ǰ��ߵĳɼ���
//���У���һ������һ����������ʾn��ѧ���� >= 5�����ڶ�������n��ѧ���ɼ���������ʾ����Χ0~100�����ÿո�ָ���
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
                max = arr[i];          //��arr[i]��arr[j]�������н���
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