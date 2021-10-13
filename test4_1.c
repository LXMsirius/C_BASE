#include<stdio.h>

int main()
{
    int i,d;
    printf("请输入当前是第几天:d=\n");
    scanf("%d",&d);
    if(d%5<4&&d%5)
        printf("这个人今天在打鱼");
    else
        printf("这个人今天在晒网");
    return 0;
}