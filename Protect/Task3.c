#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int f(int a,int b,int c)
{return a> b?(a> c?a:c):(b> c?b:c);}
int main()
{
int a=4,b=9,c=6;
printf("%d",f(a,b,c));
}
