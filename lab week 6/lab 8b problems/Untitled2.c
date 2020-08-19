#include<stdio.h>
int computeAverage(int a,int b);
int main()
{
int x,y;
printf("Enter the value of a,b\n");
scanf("%d %d",&x,&y);
computeAverage(x,y);
printf("Average is=%d",computeAverage(x,y));
}
int computeAverage(int a,int b)
{
int average=((a+b)/2);
return average;
}
