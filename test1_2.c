#include<stdio.h>

int main()
{
    int i,sum=0;
    for(i=1;i<101;i++)
    {
        if(i%6==0) {
            sum+=i;
            printf("%d ",i);
        }
    }
    printf("The sum that the multiple of six:%d",sum);
    return 0;
}