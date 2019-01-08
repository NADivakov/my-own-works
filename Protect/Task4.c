#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int f(int h, int m, int s)
{return h*3600+m*60+s;}
int main()
{
int h=4,m=9,s=6;
printf("%d",f(h,m,s));
}
