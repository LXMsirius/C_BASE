#include<stdio.h>
#include<math.h>

int main()
{
    int n1,n2,n11,n22,x,m,i,sum,N1[4],N2[4];
    printf("Please enter two four-digit integers:\n");
    scanf("%d %d",&n1,&n2);
    n11=n1;
    n22=n2;
    for(i=0,x=10;i<4;i++)
    {
        N1[i]=n11%x;
        n11-=N1[i];
        n11=n11/10;
        printf("%d ",N1[i]);
    }
    printf("\n");
    for(i=0,x=10;i<4;i++)
    {
        N2[i]=n22%x;
        n22-=N2[i];
        n22=n22/10;
        printf("%d ",N2[i]);
    }
    m=abs(n1-n2);
    if(m%2)
    {
        for ( i = 0,sum = 0; i < 4; i++)
        {
            if(N2[i]<=7&&N2[i]%2) sum+=N2[i];
        }
    }
    else
    {    
        for ( i = 0,sum = 0; i < 4; i++)
        {
            if(N1[i]<=6&&!(N1[i]%2)) sum+=N1[i];
        }
    }    
    printf("m=%d,sum=%d",m,sum);
    return 0;
}