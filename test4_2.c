#include<stdio.h>
#include<math.h>

int main()
{
    int figure=0;
    float a,b,c,perimeter,area;
    printf("��˳�������������ε������߳�a,b,c��֮���ÿո�ֿ���:");
    scanf("%f %f %f",&a,&b,&c);
    if((a+b)>c&&(a-b)<c&&a&&b&&c)
        figure=1;
        perimeter=a+b+c;
        area=sqrt(perimeter/2.0*(perimeter/2.0-a)*(perimeter/2.0-b)*(perimeter/2.0-c));
    if(figure)
        printf("area=%.2f,perimeter=%.2f",area,perimeter);
    else
        printf("These sides do not corrrespond to a valid triangle!");
    return 0;    
}