#include<stdio.h>
double getaverage(int arr[],int size)
int main()
{
int balance[5]={1000,2,3,17,50};
double avg ;
avg=  getaverage(balance,5);
printf("average value:%f",avg);
return 0;
}
double getaverage(int arr[],int size)
{
    int i;
    double avg;
    double sum;
    for (i=0;i<size;++i)
    {
        sum+=arr[i];
    }
    avg=sum/size;
    return 0;
}

