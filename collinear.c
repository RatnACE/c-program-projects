#include<stdio.h>

int main()
{
int x1,y1,x2,y2,x3,y3,d,f,e;
float a=0.000;
printf("input x1,y1");
scanf("%d%d",&x1,&y1);

printf("input x2,y2");
scanf("%d%d",&x2,&y2);

printf("input x3,y3");
scanf("%d%d",&x3,&y3);
d=x1*(y2-y3);
e=x2*(y3-y1);
f=x3*(y1-y2);
a= 0.5*(d+e+f);

if(a==0.00)
 printf("colinear");
else
printf("non colinear");


    return 0;
    }