#include<stdio.h>

int main()
{
    int n;
    void hanio(int n,char a,char b,char c);
    printf("input the number of disk:");
    scanf("%d",&n);
    printf("the steps for %d disk are:\n",n);
    hanio(n,'a','b','c');
    return 0;

}

void hanio(int n,char a,char b,char c)
{
    if(n==1)
        printf("%c-->%c\n",a,b);
    else{
        hanio(n-1,a,c,b);
        printf("%c-->%c\n",a,b);
        hanio(n-1,c,b,a);
    }
}