#include<stdio.h>
int main()
{
    int n;
    float m;
    printf("Please enter a number:");
    scanf("%d",&n);
    m=n*0.53;
    if(n-50) m+=(n-50)*0.05;
    printf("m=%8.2f",m);
    // printf("你好");
    return 0;
}