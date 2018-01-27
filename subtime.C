#include<stdio.h>
void main()
{
    int h1,h2,m1,m2,hour,min;
    scanf("%d%d",&h1,&m1);
    scanf("%d%d",&h2,&m2);
    hour=h1-h2;
    min=m1-m2;
    printf("%d\t%d",hour,min);
   
}
