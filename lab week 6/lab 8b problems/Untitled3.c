#include<stdio.h>
double getArea(int a,int b,int h);
int main()
{
double a,b,h;
printf("Enter the value of a,b and h\n");
scanf("%lf %lf %lf",&a,&b,&h);
getArea(a,b,h);
return 0;
}
double getArea(int a,int b,int h)
{
double Area=0.5*(a+b)*h;
printf("area is=%.2lf",Area);
return Area;
}
