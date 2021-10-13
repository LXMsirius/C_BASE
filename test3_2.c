#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float fun(float a,float b,float c);
    printf("请输入标准一元二次方程的三个系数：");
    scanf("%f %f %f",&a,&b,&c);
    fun(a,b,c);
    return 0;
}

float fun(float a,float b,float c)
{
    float x1,x2,n,m;
    m=b*b-4.0*a*c;
    if(m>=0&&a)
    {
        x1=(-b+sqrt(m))/(2.0*a);
        x2=(-b-sqrt(m))/(2.0*a);
        printf("方程的解为：X1=%f,X2=%f",x1,x2);
    }
    else if(a==0) printf("方程不是一元二次方程");
    else printf("方程无实根");
    return 0;
}