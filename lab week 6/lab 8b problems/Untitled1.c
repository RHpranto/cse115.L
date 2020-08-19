#include<stdio.h>
#include<math.h>
#define PI 3.1416
void findArea(int radius);
void findVolume(int radius);
int main()
{
float r;
printf("Enter the radius\n");
scanf("%f",&r);
findArea(r);
findVolume(r);
return 0;
}
void findArea(int radius){
float Area=4*PI*radius*radius;
printf("Area is=%.2f\n",Area);
return Area;
}
void findVolume(int radius){
float Volume=(4.0/3)*PI*radius*radius;
printf("volume is=%.2f\n",Volume);
return Volume;
}
