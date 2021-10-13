#include<stdio.h>
int main()
{
    int i,num,sums;
    int a[10];
    int sum(int *p,int num);
    printf("enter the members of array:");
    // scanf("%d",&num);
    for(i=0;i<10;i++)
    {
        scanf("%d",a+i);
    }
    sums=sum(a,num);
    printf("sum=%d",sums);
    return 0;

}

int sum(int *p,int num)
{
    int i,sum=0;
    for (i=0;i<num;i++)
    {
        sum+=*(p+1);
    }
    return sum;
}