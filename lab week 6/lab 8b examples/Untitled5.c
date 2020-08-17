#include<stdio.h>
int sum(int x,int y);
int main()
{
int var1,var2;
scanf("%d %d",&var1,&var2);
printf("%d+%d=%d\n",var1,var2,sum(var1,var2));
return 0;
}
int sum(int x,int y)
{
int result=x+y;
return result;
}
