#include<stdio.h>
int main()
{
    int i,x,n,sum=0;
    int sixfun(int num);
    printf("请输入整数n:\t");
    scanf("%d",&n);
    printf("1到%d之间各数位和为六的整数:\n",n);
    for (i=1;i<n+1;i++)
    {
        x=sixfun(i);
        // printf("%d\t",i);
        if(x!=0)
        {    
            sum+=x;
            printf("%d\t",x);
        }
    }
    printf("这些整数之和为：%d",sum);
    return 0;
}
int sixfun(int num)
{
    int s=0,a=0,num1;
    num1=num;
    while(num!=0)
    {
        a=num%10;
        s+=a;
        num=num/10;
    }
    if(s==6) return num1;
    else return 0;
}