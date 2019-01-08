#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int f(int m, int n)
{
if ((m>n)&&(m%n==0)) return 1;
if ((n>m)&&(n%m==0)) return 1;
if ((m>n)&&(m%n!=0)) return 0;
if ((n>m)&&(n%m!=0)) return 0;
}
int main()
{
int m=10,n=4;
printf("%d",f(m,n));
}
