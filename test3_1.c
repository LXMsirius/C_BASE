#include<stdio.h>
int main()
{
    int i,x,n,sum=0;
    int sixfun(int num);
    printf("����������n:\t");
    scanf("%d",&n);
    printf("1��%d֮�����λ��Ϊ��������:\n",n);
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
    printf("��Щ����֮��Ϊ��%d",sum);
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